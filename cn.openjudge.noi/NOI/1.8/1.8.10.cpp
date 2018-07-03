//OJ 1.8.10 矩阵转置

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    int r,c ,m[101][101];
    cin>>r>>c;
    for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
    cin>>m[i][j];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++)
        cout<<m[j][i]<<" ";
        cout<<endl;
    }
    return 0;
} 
