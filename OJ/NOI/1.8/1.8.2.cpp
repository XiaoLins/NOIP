//OJ 1.8.2 同行列对角线的格子

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    int n,i,j,count=2,a,b;
    cin>>n>>i>>j;
    cout<<'('<<i<<','<<1<<')';
    while (count <= n){
        cout<<" ("<<i<<","<<count<<")";
        count++;
    }
    cout<<endl;
    count = 2;
    cout<<'('<<1<<','<<j<<')';
    while (count <= n){
        cout<<" ("<<count<<","<<j<<")";
        count++;
    }
    cout<<endl;
    a = i;
    b = j;
    while (a > 1 && b > 1){
        a--;
        b--;
    }
    cout<<'('<<a<<','<<b<<')';
    a++;
    b++;
    while (a <= n && b <= n){
        cout<<" ("<<a<<','<<b<<')';
        a++;
        b++;
    }
    cout<<endl;
    a = i;
    b = j;
    while (a < n && b > 1){
        a++;
        b--;
    }
    cout<<'('<<a<<','<<b<<')';
    a--;
    b++;
    while (a <= n && b <= n){
        cout<<" ("<<a<<','<<b<<')';
        a--;
        b++;
    }
    return 0;
} 
