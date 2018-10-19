//luogu P1111 修复公路
//并查集 + Kruskal

#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

struct edge{
    int a,b,t;
};

int pre[1005],n,m,cnt,ans = -1;
edge a[100005];

bool com(edge a, edge b){
    return a.t<b.t;
}

int find(int x){
    if(pre[x] == x) return x;
    return pre[x] = find(pre[x]);
}

void join(int x, int y){
    int fx = find(x); int fy = find(y);
    if (fx != fy){
        pre[fx] = pre[fy];
    }
}

int main(){
    cin>>n>>m;
    for (int i = 1; i <= n; i++){
        pre[i] = i;
    }
    for (int i = 1; i <= m; i++){
        cin>>a[i].a>>a[i].b>>a[i].t;
    }
    sort(a+1,a+m+1,com);
    for (int i = 1; i <= m; i++){
        if (find(a[i].a) != find(a[i].b)){
            join(a[i].a,a[i].b);
            cnt++;
        } 
        if (cnt >= n-1){
            ans = a[i].t;
            break;
        }
    }
    cout<<ans;
    return 0;
}