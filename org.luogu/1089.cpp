//luogu.org 1089 津津的储蓄计划

#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int allowance[12],save=0,now=0;
    for (int i = 0 ; i < 12; i++){
        cin>>allowance[i];
    }
    for (int i = 0; i < 12; i++){
        now += 300;
        now -= allowance[i];
        if (now < 0){
            cout<<"-"<<i+1;
            return 0;
        }
        if (now >= 100){
            save += now / 100;
            now = now % 100;
        }
    }
    cout<<now+save*120;
    return 0;
}