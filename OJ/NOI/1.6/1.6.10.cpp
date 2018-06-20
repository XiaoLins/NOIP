//OJ 1.6.10 大整数加法
#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int la,lb,lc,x = 0;
    int a[300], b[300], c[300];
    char al[300], bl[300];
    cin>>al>>bl;
    la=strlen(al);
    lb=strlen(bl);
    for (int i = 0; i <= la-1; i++){
        a[la-i] = al[i] - 48;
    }
    for (int i = 0; i <= lb-1; i++){
        b[lb-i] = bl[i] - 48;
    }
    lc=1;
    while (lc <= la || lc <= lb){
        c[lc] = a[lc]+b[lc]+x;
        x=c[lc]/10;
        c[lc]%=10;
        lc++;
    }
    c[lc] = x;
    while (c[lc] == 0){
        lc--;
    }
    for (int i = lc; i >= 1; i--){
        cout<<c[i];
    }
	return 0;
} 
