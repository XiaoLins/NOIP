//luogu.org 1626 象棋比赛

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    long long int n,k,a[100001],diff[100001],sum;
    cin>>n>>k;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for (int i = 0; i < n-1; i++){
        diff[i] = a[i+1] - a[i];
    }
    sort(diff,diff+n-1);
    for (int i = 0; i < k; i++){
        sum += diff[i];
    }
    cout<<sum;
}