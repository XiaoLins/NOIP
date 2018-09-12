#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int a[100001] = {},n = 0,b[100001] = {},cnt = 0,mx = 0,now = 0;

int main(){
    while (scanf("%d",&a[n]) != EOF){
        if (b[cnt] == 0){
            b[cnt] = a[n];
            now++;
            if (now >= mx){
                mx = now;
            }
        } else if (a[n] > b[cnt]){
            cnt++;
            b[cnt] = a[n];
            now = 0;
        } else{
            b[cnt] = a[n];
            now++;
            if (now >= mx){
                mx = now;
            }
        }
        n++;
    }
    cout<<mx<<endl<<cnt;
    return 0;
}