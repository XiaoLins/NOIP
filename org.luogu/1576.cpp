//luogu.org 1576 最小花费
#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int m,n,w[100005],c[100005][3],dis[2005],pre[2005],a,b;
double res = 100;

int main(){
    cin>>n>>m;

    for (int i = 1; i <= n; i++){
        dis[i] = 0x7fffffff/3;
        c[i][1] = 0x7fffffff/3;
        c[i][2] = 0x7fffffff/3;
    }
    for (int i = 1; i <= m; i++){
        cin>> c[i][1] >> c[i][2] >> w[i];
    }
    cin>>a>>b;
    dis[a] = 0;
    pre[a] = -1;
    cout<<1<<endl;
    for (int i = 1; i <= n-1; i++){
        for (int j = 1; j <= m; j++){
            if (dis[c[j][1]]+w[j] < dis[c[j][2]]){
                dis[c[j][2]] = dis[c[j][1]]+w[j];
                pre[c[j][2]] = c[j][1];
            }
            if (dis[c[j][2]]+w[j] < dis[c[j][1]]){
                dis[c[j][1]] = dis[c[j][2]]+w[j];
                pre[c[j][1]] = c[j][2];
            }
        }
    }
    int i = pre[b];
    int bian;
    while (pre[i] != -1){
        for (int j = 1; j <= m; j++){
            if ((c[j][1] == i && c[j][2] == pre[i]) || (c[j][2] == i && c[j][1] == pre[i])){
                bian = j;
                break;
            }
        }
        res /= (1 - (w[bian] / 100));
    }
    printf("%.8lf",res);
    return 0;
}