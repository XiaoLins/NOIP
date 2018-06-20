//OJ 1.8.3 计算矩阵边缘元素之和

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    int r,c,sum=0;
    cin>>r>>c;
    int m[r][c];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin>>m[i][j];
        }
    }
    for (int i = 0; i < c; i++){
        sum += m[0][i];
        sum += m[r-1][i];
    }
    for (int i = 1; i < r-1; i++){
        sum += m[i][0];
        sum += m[i][c-1];
    }
    cout<<sum;
    return 0;
} 
