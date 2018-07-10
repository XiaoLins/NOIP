//luogu.org 1424 小鱼的航程(改进版)

#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long int x,n,now = 0,cnt = 0;
    cin>>x>>n;
    while (cnt < n){
        if (x == 6){
            x++;
            cnt++;
        } else if (x == 7){
            x = 1;
            cnt++;
        } else{
            now += 250;
            x++;
            cnt++;
        }
    }
    cout<<now;
}