#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int MAX_N = 3005, MAX_M = 3005;
int pre[MAX_N],n,m,a[MAX_N],b[MAX_N],q[MAX_N],ans[MAX_N];
bool inSet[MAX_N];

int find(int k){
    if(pre[k] == k) return k;
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
    memset(ans,0,sizeof(ans));
    for (int i = 1; i <= n; i++){
        pre[i] = i;
    }
    for (int i = 1; i <= m; i++){
        scanf("%d%d",&a[i],&b[i]);
    }
    for (int i = 1; i <= n; i++){
        scanf("%d",&q[i]);
    }
    for (int i = n; i >= 1; i--){
        inSet[q[i]] = true;
        for (int j = 1; j <= m; j++){
            if(inSet[a[j]] && inSet[b[j]]){
                join(a[j],b[j]);
            }
        }
        for (int j = 1; j <= n; j++){
            if(find(j) == j && inSet[j]) ans[i]++;
        }
    }
    for (int i = 1; i <= n-1; i++){
        if (ans[i] == 1) printf("YES\n");
        else printf("NO\n");
    }
    printf("YES");
    return 0;
}