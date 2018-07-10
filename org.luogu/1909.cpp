//luogu.org 1909 买铅笔

#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    double n,num[3],p[3],min,mon[3];
    cin>>n;
    for (int i = 0; i < 3; i++){
        cin>>num[i]>>p[i];
    }
    for (int i = 0; i < 3; i++){
        mon[i] = ceil(n/num[i])*p[i];
    }
    min = mon[0];
    for (int i = 1; i < 3; i++){
        if (min > mon[i]){
            min = mon[i];
        }
    }
    cout<<int(min);
    return 0;
}