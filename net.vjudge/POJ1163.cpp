//POJ 1163 The Triangle
//Dynamic Programming

#include <cstdio>
#include <iostream>

using namespace std;

int n,tri[105][105] = {};

int main(){
    cin>>n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cin>>tri[i][j];
        }
    }
    for (int i = n-1; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            tri[n][j] = tri[i][j] + max(tri[n][j],tri[n][j+1]);
        }
    }
    cout<<tri[n][1];
    return 0;
}