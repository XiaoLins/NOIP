#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_N = 100005, INF = 0x3f3f3f3f;
int n,a[MAX_N],dp[MAX_N];

int main(){
    cin>>n;
    for (int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    for (int i = 0 ; i <= n; i++) dp[i] = INF;
    for (int i = 0 ; i < n; i++){
        int j = lower_bound(dp+1,dp+1+n,a[i]) - dp;
        dp[j] = a[i];
    }
    int ans = 0;
    for (int i = 1; i <= n; i++){
        if (dp[i] != INF){
            ans = i;
        }
    }
    cout<<ans<<endl;
    return 0;
}