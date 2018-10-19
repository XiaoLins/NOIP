//luogu P1048 采药
#include <cstdio>
#include <iostream>
using namespace std;

const int MAX_N = 105;
int n,T,v[105],t[105],dp[105][1005];

int main(){
    cin>>T>>n;
    for (int i = 1; i <= n; i++){
        cin>>t[i]>>v[i];
    }
    for (int i = 1; i <= n; i++){
        for (int j = T; j >= 0; j--){
            dp[i][j] = dp[i-1][j];
            if (j >= t[i]){
                dp[i][j] = max(dp[i][j],dp[i-1][j-t[i]]+v[i]);
            }
        }
    }
    cout<<dp[n][T];
    return 0;
}
