//OJ 1.8.6 图像相似度

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    double rate;
    int r,c,m1[101][101],m2[101][101],count = 0;
    cin>>r>>c;
    for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
    cin>>m1[i][j];
    for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
    cin>>m2[i][j];
    for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++){
        if (m1[i][j] == m2[i][j])
        count++;
    }
    rate = double(count) / double(r*c);
    printf("%.2f", rate*100);
    return 0;
} 
