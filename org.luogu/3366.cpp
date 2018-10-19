//luogu P3366 【模板】最小生成树

#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

struct edge{
    int a,b,t;
};

const int MAX_M = 200005;
const int MAX_N = 5005;
int n,m,xi,yi,zi,ans,pre[MAX_N],cnt;
edge G[MAX_M];

bool comp(edge a, edge b){
    return a.t<b.t;
}

int find(int k){
    if (pre[k] == k) return k;
    return pre[k]=find(pre[k]);
}

void join(int x, int y){
    int fx = find(x); int fy = find(y);
    if(fx != fy){
        pre[fx] = pre[fy];
    }
}

int main(){
    cin>>n>>m;
    for (int i = 1; i <= m; i++){
        cin>>G[i].a>>G[i].b>>G[i].t;
    }
    for (int i = 1; i <= n; i++){
        pre[i] = i;
    }
    sort(G+1,G+1+m,comp);
    for (int i = 1; i <= m; i++){
        if (find(G[i].a) != find(G[i].b)){
            ans += G[i].t;
            cnt++;
            join(G[i].a,G[i].b);
        }
        if (cnt >= n-1) break;
    }
    cout<<ans;
    return 0;
}