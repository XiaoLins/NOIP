//luogu.org 1200 [USACO1.1]你的飞碟在这儿

#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    string a,b;
    int c = 1,d = 1;
    cin>>a>>b;
    for (int i = 0; i < a.size(); i++){
        c *= (a[i] - '@');
    }
    for (int i = 0; i < b.size(); i++){
        d *= (b[i] - '@');
    }
    c = c % 47;
    d = d % 47;
    if (c == d){
        cout<<"GO";
    } else{
        cout<<"STAY";
    }
    return 0;
}