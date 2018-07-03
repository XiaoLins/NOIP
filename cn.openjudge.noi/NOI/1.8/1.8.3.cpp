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
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if (i == 0 || j == 0 || i == r - 1 || j == c - 1){
                sum += m[i][j];
            }
        }
    }
    cout<<sum;
    return 0;
} 
