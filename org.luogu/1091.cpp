#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int MAX_N = 105, INF = 0x3f3f3f3f;
int n,a[MAX_N],dp1[MAX_N],dp2[MAX_N],ans;

int main(){
    cin>>n;
    for (int i = 1; i <= n; i++){
        cin>>a[i];
        dp1[i] = 1;
        dp2[i] = 1;
    }
    // for (int i = 0; i <= n; i++) dp[i] = INF;
    // for (int i = 0; i < n; i++){
    //     int j = lower_bound(dp+1,dp+1+n,a[i]) - dp;
    //     dp[j] = a[i];
    // }
    // int ans = 0;
    // for (int i = 1; i <= n; i++){
    //     if (dp[i] != INF){
    //         ans = i;
    //     }
    // }
    // pos = dp[ans];
    // cout<<ans<<endl<<pos;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j < i; j++){
            if(a[i] > a[j]) dp1[i] = max(dp1[i],dp1[j]+1);
        }
    }
    //ans += dp[n];
    //cout<<ans<<endl;
    //memset(dp,1,sizeof(dp));
    for (int i = n; i >= 1; i--){
        for (int j = n; j > i; j--){
            if (a[i] > a[j]) dp2[i] = max(dp2[i],dp2[j]+1);
        }
    }
    //ans += dp[n];
    //ans = max(1,ans-1);
    for (int i = 1; i <= n; i++){
        ans = max(ans,dp1[i]+dp2[i]-1);
    }
    cout<<n-ans;
    return 0;
}