//OJ 1.8.5 计算鞍点

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    int m[5][5],max[5],min[5],r = -1,c = -1;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin>>m[i][j];
        }
    }
    for (int i = 0; i < 5; i++){
        max[i] = 0;
        min[i] = 0;
    }
    for (int i = 0; i < 5; i++){
        for (int j = 1; j < 5; j++){
            if (m[i][max[i]] < m[i][j])
            max[i] = j;
            if (m[min[i]][i] > m[j][i])
            min[i] = j;
        }
    }
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (max[i] == j && min[j] == i){
                r = i;
                c = j;
            }
        }
    }
    if (r != -1){
        cout<<r+1<<" "<<c+1<<" "<<m[r][c];
    } else{
        cout<<"not found";
    }
    return 0;
} 
