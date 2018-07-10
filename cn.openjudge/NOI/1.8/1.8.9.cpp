//OJ 1.8.9 矩阵乘法

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    int n,m,k,m1[101][101],m2[101][101],r[101][101]={};
    cin>>n>>m>>k;
    for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
    cin>>m1[i][j];
    for (int i = 0; i < m; i++)
    for (int j = 0; j < k; j++)
    cin>>m2[i][j];
    for (int i = 0; i < n; i++)
    for (int j = 0; j < k; j++)
    for (int y = 0; y < m; y++)
    r[i][j] += m1[i][y] * m2[y][j];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++)
        cout<<r[i][j]<<" ";
        cout<<endl;
    }
    return 0;
} 
