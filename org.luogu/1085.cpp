//luogu.org 1085 不高兴的津津

#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int a[7],b[7],c[7],max;
    for (int i = 0; i < 7; i++){
        cin>>a[i]>>b[i];
        c[i] = a[i] + b[i];
    }
    max = c[6];
    for (int i = 5; i >= 0; i--){
        if (c[i] >= c[max]){
            max = i;
        }
    }
    if (c[max] >= 8){
        cout<<max+1;
    } else{
        cout<<0;
    }
    return 0;
}