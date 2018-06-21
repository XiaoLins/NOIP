//OJ 1.8.7 矩阵归零消减序列和
//暂未完成

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    int n,m[101][101],minR[101],minC[101];
    cin>>n;
    for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
    cin>>m[i][j];
    for (int i = 0; i < n-1; i++){
        cout<<m[1][1]<<endl;
        for (int j = 0; j < n - i; j++){
            minR[j] = m[j][0];
            minC[j] = m[0][j];
        }

    }
    return 0;
} 
