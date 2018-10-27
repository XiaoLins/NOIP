//luogu 1546 最短网络 Agri-Net

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

struct edge{
    int a,b,d;
};

const int MAX_N = 105;
int pre[105],n,inp,cnt,ans,edgeCnt = 0;
edge G[MAX_N*MAX_N];

// int fac(int n){
//     if (n == 0) return 0;
//     int ans = 1;
//     while(n > 0){
//         ans += n;
//         n--;
//     }
//     return ans;
// }

bool comp(edge a, edge b){
    return a.d<b.d;
}

int find(int k){
    if (pre[k] == k) return k;
    return pre[k] = find(pre[k]);
}

void join(int x, int y){
    int fx = find(x); int fy = find(y);
    if (fx != fy){
        pre[fy] = pre[fx];
    }
}

int main(){
    cin>>n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin>>inp;
            if (i > j){
                edge e;
                e.a = i;
                e.b = j;
                e.d = inp;
                edgeCnt++;
                G[edgeCnt] = e;
            }
        }
    }
    for (int i = 1; i <= n; i++){
        pre[i] = i;
    }
    sort(G+1,G+1+edgeCnt,comp);
    // cout<<edgeCnt<<endl;
    // for (int i = 1; i <= 6; i++){
    //     cout<<G[i].a<<" "<<G[i].b<<" "<<G[i].d<<endl;
    // }
    for (int i = 1; i <= edgeCnt; i++){
        int fx = find(G[i].a);
        int fy = find(G[i].b);
        if (fx != fy){
            join(fx,fy);
            cnt++;
            ans += G[i].d;
        }
        if (cnt >= n-1){
            break;
        }
    }
    cout<<ans;
}