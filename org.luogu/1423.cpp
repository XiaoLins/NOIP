//luogu.org 1423 小玉在游泳

#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double d,now = 0;
    int cnt = 0;
    cin>>d;
    while (now < d){
        now += 2 * pow(0.98,cnt);
        cnt++;
    }
    cout<<cnt;
    return 0;
}