#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

struct edge{
    int a,b,d;
};

const int MAX_N = 1005;
int n,k,pre[MAX_N],cnt,ans;
edge G[MAX_N];

bool comp(edge a, edge b){
    return a.d<b.d;
}

int find(int k){
    if (pre[k] == k) return k;
    return pre[k] = find(pre[k]);
}

void join(int a, int b){
    int fa = find(a), fb = find(b);
    if (fa != fb) pre[fa] = fb;
}

int main(){
    cin>>n>>k;
    edge e;
    for (int i = 1; i <= n; i++) pre[i] = i;
    for (int i = 1; i <= k; i++){
        cin>>e.a>>e.b>>e.d;
        G[i] = e;
        ans += e.d;
    }
    sort(G+1,G+1+k,comp);
    for (int i = 1; i <= k; i++){
        int fa = find(G[i].a), fb = find(G[i].b);
        if (fa != fb){
            join(fa,fb);
            cnt++;
            ans -= G[i].d;
        }
        if (cnt >= n-1){
            break;
        }
    }
    cout<<ans;
    return 0;
}