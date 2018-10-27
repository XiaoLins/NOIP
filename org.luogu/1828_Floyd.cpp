#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>

using namespace std;

const int MAX_N = 505, MAX_P = 805, MAX_M = 1455, INF = 0x3f3f3f3f;
int dist[MAX_P][MAX_P],n,p,m,loc[MAX_N];
unsigned long long int minSum = INF;

int main(){
    cin>>n>>p>>m;
    for (int i = 1; i <= n; i++){
        scanf("%d",&loc[i]);
    }
    for (int i = 1; i <= p; i++){
        for (int j = 1; j <= p; j++){
            if(i == j) dist[i][j] = 0;
            else dist[i][j] = INF;
        }
    }
    for (int i = 1; i <= m; i++){
        int in1,in2,in3;
        scanf("%d%d%d",&in1,&in2,&in3);
        dist[in1][in2] = in3;
        dist[in2][in1] = in3;
    }
    for (int k = 1; k <= p; k++){
        for (int i = 1; i <= p; i++){
            for (int j = 1; j <= i; j++){
                if (dist[i][j] > dist[i][k] + dist[k][j]){
                    dist[i][j] = dist[i][k] + dist[k][j];
                    dist[j][i] = dist[i][j];
                }
            }
        }
    }
    for (int i = 1; i <= p; i++){
        unsigned long long int sum = 0;
        for (int j = 1; j <= n; j++){
            sum += dist[loc[j]][i];
        }
        minSum = min(minSum,sum);
    }
    printf("%lld",minSum);
    return 0;
}