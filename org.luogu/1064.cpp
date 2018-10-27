//luogu 1064 金明的预算方案

#include <cstdio>
#include <algorithm>
#include <iostream>

using namespace std;

const int MAX_N = 32005, MAX_M = 63;

int n,m,v,p,q; //n表示总钱数，m为希望购买物品的个数。
int zhuV[MAX_M],zhuW[MAX_M],fuW[MAX_M][5],fuV[MAX_M][5],dp[MAX_N];

int main(){
    cin>>n>>m;
    for (int i = 1; i <= m; i++){
        cin>>v>>p>>q;
        if (q == 0){
            zhuV[i] = v*p;
            zhuW[i] = v;
        } else{
            fuW[q][0]++;
            fuW[q][fuW[q][0]] = v;
            fuV[q][fuW[q][0]] = v*p;
        }
    }
    for (int i = 1; i <= m; i++){
        for (int j = n; zhuW[i] != 0 && j >= zhuW[i]; j--){
            //if (j >= zhuW[i]){
            dp[j] = max(dp[j],dp[j-zhuW[i]]+zhuV[i]);
            //}
            if (j >= zhuW[i] + fuW[i][1]){
                dp[j] = max(dp[j],dp[j-zhuW[i]-fuW[i][1]] + zhuV[i] + fuV[i][1]);
            }
            if (j >= zhuW[i] + fuW[i][2]){
                dp[j] = max(dp[j],dp[j-zhuW[i]-fuW[i][2]] + zhuV[i] + fuV[i][2]);
            }
            if (j >= zhuW[i] + fuW[i][1] + fuW[i][2]){
                dp[j] = max(dp[j],dp[j-zhuW[i]-fuW[i][1]-fuW[i][2]] + zhuV[i] + fuV[i][1] + fuV[i][2]);
            }
        }
    }
    cout<<dp[n];
    return 0;
}