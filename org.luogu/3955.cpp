//luogu.org P3955 图书管理员

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>



using namespace std;

int main(){
    int n,q,lens[1001],min=20000000,reqIDs[1001],ids[1001];
    cin>>n>>q;
    for (int i = 0; i < n; i++)
    cin>>ids[i];
    sort(ids,ids);
    for (int i = 0; i < q; i++)
    cin>>lens[i]>>reqIDs[i];

    return 0;
}