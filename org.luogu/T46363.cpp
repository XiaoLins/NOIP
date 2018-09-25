//https://www.luogu.org/problemnew/show/T46363
//最短路径问题 - Dijkstra

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

int n,m,x,y,k,s,t;
double minl,maxx=1e30;
double f[101][101];
int a[101][3]; 
double c[101];
bool b[101] = {};

int main(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i][1] >> a[i][2];
    }
    cin >> m;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            f[i][j] = maxx;
        }
    }
    for (int i = 1; i <= m; i++){
        cin >> x >> y;
        f[x][y] = f[y][x] = sqrt(pow(double(a[x][1]-a[y][1]),2)+pow(double(a[x][2]-a[y][2]),2));
    }
    cin >> s >> t;
    for (int i = 1; i <= n; i++){
        c[i] = f[s][i];
    }
    b[s] = true;
    c[s] = 0;
    for (int i = 1; i <= n; i++){
        minl = maxx;
        k = 0;
        for (int j = 1; j <= n; j++){
            if(!b[j] && c[j] < minl){
                minl = c[j];
                k = j;
            }
        }
        if (k == 0){
            break;
        }
        b[k] = true;
        for (int j = 1; j <= n; j++){
            if (c[k] + f[k][j] < c[j]){
                c[j] = c[k] + f[k][j];
            }
        }
    }
    printf("%.2lf\n",c[t]);
    return 0;
}