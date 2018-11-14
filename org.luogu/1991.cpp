#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>

using namespace std;

struct edge{
    int a,b;
    double d;
};

struct node{
    int x,y;
};

const int MAX_N = 505;
node points[MAX_N];
edge G[MAX_N*MAX_N];
int pre[MAX_N],s,n,edgeCnt;

bool comp(edge a, edge b){
    return a.d < b.d;
}

int find(int k){
    if (pre[k] == k) return k;
    return pre[k] = find(pre[k]);
}

void join(int x, int y){
    int fx = find(x), fy = find(y);
    if (fx != fy) pre[fx] = fy;
}

double dist(node a, node b){
    return sqrt((b.x-a.x)*(b.x-a.x) + (b.y-a.y)*(b.y-a.y));
}

int main(){
    cin>>s>>n;
    for (int i = 1; i <= n; i++){
        cin>>points[i].x>>points[i].y;
    }
    for (int i = 1; i <= n; i++) pre[i] = i;
    edge e;
    for (int i = 1; i <= n; i++){
        for (int j = i; j <= n; j++){
            if (i == j) continue;
            e.a = i;
            e.b = j;
            e.d = dist(points[i],points[j]);
            G[++edgeCnt] = e;
        }
    }
    sort(G+1,G+1+edgeCnt,comp);
    int fa,fb,cnt = 0;
    double ans;
    for (int i = 1; i <= edgeCnt; i++){
        e = G[i]; fa = find(e.a); fb = find(e.b);
        if (fa != fb){
            join(fa,fb);
            cnt++;
        }
        if(cnt >= n-s){
            ans = e.d;
            break;
        }
    }
    printf("%.2f",ans);
    return 0;
}