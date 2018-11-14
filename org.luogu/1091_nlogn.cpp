#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_N = 105, INF = 0x3f3f3f3f;
int n,a[MAX_N],b[MAX_N],dp[MAX_N],ret,ans;

int main(){
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i];
        b[n-1-i] = a[i];
    }
    for (int i = 0; i <= n; i++) dp[i] = INF;
    for (int i = 0; i < n; i++){
        int j = lower_bound(dp+1,dp+1+n,a[i]) - dp;
        dp[j] = a[i];
    }
    for (int i = 1; i <= n; i++){
        if (dp[i] != INF) ret = i;
    }
    ans += ret;
    cout<<endl<<ret<<endl;
    ret = 0;
    for (int i = 0; i <= n; i++) dp[i] = INF;
    for (int i = 0; i < n; i++){
        int j = lower_bound(dp+1,dp+1+n,b[i]) - dp;
        dp[j] = a[i];
    }
    for (int i = 1; i <= n; i++){
        if (dp[i] != INF) ret = i;
    }
    ans += ret;
    ans--;
    cout<<ret<<endl;
    cout<<ans;
    return 0;
}

//nlogn二分法做不出来