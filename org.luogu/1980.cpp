//luogu.org 1980 计数问题

#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n,x,cnt = 0,num,p;
    cin>>n>>x;
    for (int i = 1; i <= n; i++){
        num = i;
        p = 0;
        if (num % 10 == x){
            cnt++;
        }
        if (num < 10){
            p = 1;
        }
        while (!p){
            num /= 10;
            if (num % 10 == x){
                cnt++;
            }
            if (num < 10){
                p = 1;
            }
        }
    }
    cout<<cnt;
    return 0;
}