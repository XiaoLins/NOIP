// oj.noi.cn 1109 维护序列 (顺序表解法)

#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int n,m,a[2001],v,p;

void ins(int pos, int val){
    for (int i = n; i >= pos; i--){
        a[i+1] = a[i];
    }
    a[pos] = val;
    n++;
}

void del(int pos){
    for (int i = pos + 1; i <= n; i++){
        a[i-1] = a[i];
    }
    n--;
}

int main() {
    cin>>n;
    for (int i = 1; i <= n; i++){
        cin>>a[i];
    }
    cin>>m;
    int type;
    for (int i = 1; i <= m; i++){
        cin>>type>>p;
        if (type == 1){
            cout<<a[p]<<endl;
        } else if(type == 2){
            cin>>v;
            ins(p,v);
        } else if(type == 3){
            del(p);
        }
    }
    return 0;
}