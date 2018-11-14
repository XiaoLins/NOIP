#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

struct gx{
    int a,b,v;
};

const int MAX_N = 20005, MAX_M = 100005;
int n,m,pre[MAX_N],enemy[MAX_N];
gx G[MAX_M];

bool comp(gx x, gx y){
    return x.v>y.v;
}

int find(int k){
    if (pre[k] == k) return k;
    return pre[k] = find(pre[k]);
}

void join(int x, int y){
    int fx = find(x), fy = find(y);
    if (fx != fy){
        pre[fx] = fy;
    }
}

int main(){
    scanf("%d%d",&n,&m);
    gx r;
    for (int i = 1; i <= n; i++){
        pre[i] = i;
    }
    for (int i = 1; i <= m; i++){
        scanf("%d%d%d",&r.a,&r.b,&r.v);
        G[i] = r;
    }
    sort(G+1,G+1+m,comp);
    int a,b,v;
    for (int i = 1; i <= m; i++){
        a = G[i].a; b = G[i].b; v = G[i].v;
        if (find(a) == find(b)){
            printf("%d",v);
            return 0;
        } else{
            if (!enemy[a]) enemy[a] = b;
            else join(enemy[a],b);
            if (!enemy[b]) enemy[b] = a;
            else join(enemy[b],a); 
        }
    }
    printf("0");
    return 0;
}