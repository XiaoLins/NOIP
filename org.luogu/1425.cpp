//luogu.org 1425 小鱼的游泳时间

#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int a,b,c,d,total;
    cin>>a>>b>>c>>d;
    total = (c * 60 + d) - (a * 60 + b);
    cout<<total/60<<" "<<total%60;
    return 0;
}