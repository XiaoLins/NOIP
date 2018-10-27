//luogu 1616 疯狂的采药

#include <cstdio>
#include <iostream>

using namespace std;

const int MAX_T =  100005, MAX_M = 10005;
int T,M,t[MAX_M],v[MAX_M],dp[MAX_T];

int main(){
    cin>>T>>M;
    for (int i = 1; i <= M; i++){
        cin>>t[i]>>v[i];
    }
    for (int i = 1; i <= M; i++){
        for (int j = 0; j <= T; j++){
            //dp[i][j] = dp[i-1][j];
            if (j >= t[i]){
                dp[j] = max(dp[j],dp[j-t[i]]+v[i]);
            }
        }
    }
    cout<<dp[T];
    return 0;
}