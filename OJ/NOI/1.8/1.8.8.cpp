//OJ 1.8.8 矩阵加法

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    int n,m,m1[101][101],m2[101][101];
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
    cin>>m1[i][j];
    for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
    cin>>m2[i][j];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout<<m1[i][j]+m2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
} 
