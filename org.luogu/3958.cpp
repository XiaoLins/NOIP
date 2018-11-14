#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>

using namespace std;

struct node{
    long long x,y,z;
};

const int MAX_N = 1005;
int pre[MAX_N],T,n;
long long h,r;
double dist[MAX_N][MAX_N];
node p,points[MAX_N];

int find(int k){
    if (pre[k] == k) return k;
    return pre[k] = find(pre[k]);
}

void join(int x, int y){
    int fx = find(x), fy = find(y);
    if (fx != fy) pre[fx] = fy;
}

double calc(node a, node b){
    return sqrt((a.z-b.z)*(a.z-b.z)+(a.y-b.y)*(a.y-b.y)+(a.x-b.x)*(a.x-b.x));
}

int main(){
    //freopen("3958.in","r",stdin);
    //freopen("3958.out","w",stdout);
    scanf("%d",&T);
    while(T){
        T--;
        scanf("%d%lld%lld",&n,&h,&r);
        for (int i = 1; i <= n+2; i++) pre[i] = i;
        for (int i = 1; i <= n; i++){
            scanf("%lld%lld%lld",&p.x,&p.y,&p.z);
            points[i] = p;
        }
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                if (i == j) continue;
                dist[i][j] = calc(points[i],points[j]);
            }
        } //n+1表示下表面，n+2表示上表面。
        for (int i = 1; i <= n; i++){
            if (points[i].z + r >= h) join(i,n+2);
            if (points[i].z - r <= 0) join(i,n+1);
        }
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                if (dist[i][j] <= 2*r) join(i,j);
            }
        }
        if (find(n+1) == find(n+2)) printf("Yes\n");
        else printf("No\n");
    }
    //fclose(stdin); fclose(stdout);
    return 0;
}