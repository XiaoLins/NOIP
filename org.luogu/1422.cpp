//luogu.org 1422 小玉家的电费

#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    double money,a,t;
    cin>>a;
    t = a;
    if (a >= 150){
        money += 150 * 0.4463;
        t -= 150;
    } else{
        printf("%.1f",t*0.4463);
        return 0;
    }
    if (a >= 400){
        money += 250 * 0.4663;
        t -= 250;
    } else{
        printf("%.1f", money + 0.4663 * t);
        return 0;
    }
    money += t * 0.5663;
    printf("%.1f",money);
    return 0;
}