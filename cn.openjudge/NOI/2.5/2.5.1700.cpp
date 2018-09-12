//NOI 2.5.1700 八皇后问题
#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int a[9],cnt = 1;
bool b[9] = {0},sum[17] = {0},diff[17] = {0};

int search(int);
int print();
int main(){
    search(1);
    return 0;
}

int search(int r){ //r为行数
    int c;
    for (c = 1; c <= 8; c++){ //c为列数
        if ((!b[c]) && (!sum[r+c]) && (!diff[r-c+7])){
            a[r] = c;
            b[c] = true;
            sum[r+c] = true;
            diff[r-c+7] = true;
            if (r == 8){
                print();
            } else{
                search(r+1);
            }
            b[c] = false;
            sum[r+c] = false;
            diff[r-c+7] = false;
        }
    }
}

int print(){
    cout<<"No. "<<cnt<<endl;
    cnt++;
    for (int i = 1; i <= 8; i++){
        for (int j = 1; j <= 8; j++){
            if (a[i] == j){
                if(j == 8){
                    cout<<1<<endl;
                } else{
                    cout<<1<<" ";
                }
            } else{
                if(j == 8){
                    cout<<0<<endl;
                } else{
                    cout<<0<<" ";
                }
            }
        }
    }
}