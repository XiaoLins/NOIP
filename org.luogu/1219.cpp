#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int n,cnt=0,c[15] = {};
bool occupied[15] = {};

void print(){
    if(cnt <= 3){
        cout<<c[1];
        for(int i = 2; i <= n; i++){
            cout<<" "<<c[i];
        }
        cout<<endl;
    }
}

void search(int step){
    if(step == n){
        cnt++;
        print();
    }
    for(int i = 1; i <= n; i++){ //i代表行号
        for (int j = 1; j <=n; j++){
            if(!occupied[j]){
                occupied[j] = true;
                search(step+1);
                occupied[j] = false;
            }
        }
    }
}

int main(){
    cin>>n;
    search(0);
}