//luogu.org 1031 均分纸牌

#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int n,a[102] = {},cnt = 0,avg;

int main(){
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        avg += a[i];
    }
    avg /= n;
    int diff[n];
    for (int i = 0; i < n; i++){
        diff[i] = a[i] - avg;
    }
    for (int i = 0; i < n - 1; i++){
    	if (diff[i] != 0){
    		diff[i+1] += diff[i];
    		diff[i] = 0;
    		cnt++;
        }
    }
    cout<<cnt;
    return 0;
}