//OJ 1.8.12 变幻的矩阵

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    int n, type = 5, tendency[5]={};
    char m1[11][11], m2[11][11];
    cin>>n;
    for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
    cin>>m1[i][j];
    for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
    cin>>m2[i][j];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (m1[i][j] == m2[j][n-1-i]){
                tendency[1]++;
            }
            if (m1[i][j] == m2[n-1-j][i]){
                tendency[2]++;
            }
            if (m1[i][j] == m2[n-1-i][n-1-j]){
                tendency[3]++;
            }
            if (m1[i][j] == m2[i][j]){
                tendency[4]++;
            }
        }
    }
    for (int i = 1; i < 5; i++){
        if (tendency[i] == n*n){
            type = i;
            break;
        }
    }
    cout<<type;
    return 0;
} 
