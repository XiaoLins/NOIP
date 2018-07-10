//luogu.org 1035 级数求和

#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    double n = 1;
    double now = 0,K;
    cin>>K;
    while (now <= K){
        now += 1/n;
        n++;
    }
    cout<<n-1;
    return 0;
}