//OJ 1.8.13 图像模糊处理

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    int r,c,m[103][103] = {};
    double temp;
    cin>>r>>c;
    for (int i = 1; i <= r; i++)
    for (int j = 1; j <= c; j++)
    cin>>m[i][j];
    for (int i = 1; i <= r; i++){
        for (int j = 1; j <= c; j++){
            if (i == 1 || i == r || j == 1 || j == c){
                cout<<m[i][j]<<" ";
            } else{
                cout<<int((m[i-1][j] + m[i+1][j] + m[i][j-1] + m[i][j+1] + m[i][j]) / 5.0 + 0.5)<<" ";
            }
        }
        cout<<endl;
    }


    return 0;
} 
