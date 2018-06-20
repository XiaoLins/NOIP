//OJ 1.8.4 错误探测

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    int n, m[101][101], a = 0, r, c;
    bool changable = true, firstRow = true, firstColumn = true;
    cin>>n;
    for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++)
    cin>>m[i][j];
    //遍历每行，检查是否符合条件。
    for (int i = 1; i <= n; i++){ 
        for (int j = 1; j <= n; j++){
            if (m[i][j] == 1){
                a++;
            }
        }
        if (a % 2 != 0){
            if (firstRow){
                r = i;
                firstRow = false;
            } else{
                cout<<"Corrupt";
                return 0;
            }
        }
        a = 0;
    }
    //遍历每列，检查是否符合条件。
    for (int i = 1; i <= n; i++){ 
        for (int j = 1; j <= n; j++){
            if (m[j][i] == 1){
                a++;
            }
        }
        if (a % 2 != 0){
            if (firstColumn){
                c = i;
                firstColumn = false;
            } else{
                cout<<"Corrupt";
                return 0;
            }
        }
        a = 0;
    }
    //检查情况，返回结果
    if (!firstRow && !firstColumn){
        cout<<r<<" "<<c;
    } else if(firstRow && firstColumn){
        cout<<"OK";
    } else{
        cout<<"Corrupt";
    }
    return 0;
} 
