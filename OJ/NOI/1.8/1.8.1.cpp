//OJ 1.8.1 矩阵交换行

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    int a,b,matrix[5][5],temp[5];
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin>>matrix[i][j];
        }
    }
    cin>>a>>b;
    a--;
    b--;
    for (int i = 0; i < 5; i++){
        temp[i] = matrix[a][i];
        matrix[a][i] = matrix[b][i];
        matrix[b][i] = temp[i];
    }
    for (int i = 0; i < 5; i++){
        cout<<matrix[i][0];
        for (int j = 1; j < 5; j++){
            cout<<" "<<matrix[i][j];
        }
        cout<<endl;
    }
    return 0;
} 
