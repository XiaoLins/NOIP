#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;
const int MAX_N = 500005;


struct edge{
    int t,nex;
} e[MAX_N*2];

int tot,n,m,s,depth[MAX_N],fa[MAX_N][22],lg[MAX_N],head[MAX_N];

void add(int x, int y){
    e[++tot].t = y;
    e[tot].nex = head[x];
    head[x] = tot;
}

void dfs(int now, int fath){ // f表示当前节点，fath表示它的父亲节点
    depth[now] = depth[fath]+1;
    fa[now][0] = fath;
    for (int i = 1; (1<<i) <= depth[now]; i++){
        fa[now][i] = fa[fa[now][i-1]][i-1]; //这个转移可以说是算法的核心之一
        //意思是f的2^i级祖先等于f的2^(i-1)的祖先的2^(i-1)祖先
        //2^i = 2^(i-1) + 2^(i-1);
    }
    for (int i = head[now]; i; i = e[i].nex)
        if(e[i].t != fath) dfs(e[i].t,now);
}

int lca(int x, int y){
    if (depth[x] < depth[y]){
        swap(x,y);
    }
    while (depth[x] > depth[y]){
        x = fa[lg[depth[x]-depth[y]]-1]
    }
    if (x == y){
        return x;
    }
    for (int k = lg[depth[x]]-1; k >= 0; k--){
        if (fa[x][k] != fa[y][k]){
            x = fa[x][k];
            y = fa[y][k];
        }
    }
    return fa[x][0];
}

int main(){
    scanf("%d%d%d",&n,&m,&s);
    for (int i = 1; i <= n-1; i++){
        int x,y; scanf("%d%d",&x,&y);
        add(x,y); add(y,x);
    }
    dfs(s,0);

    for (int i = 1; i <= n; i++){
        lg[i] = lg[i-1] + (1<<lg[i-1] == i);
    }
    for (int i = 1; i <= m; i++){
        int x,y; scanf("%d%d",&x,&y);
        printf("%d\n",lca(x,y));
    }
    return 0;
}