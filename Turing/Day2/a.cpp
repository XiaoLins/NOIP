#include <cstdio>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <utility>
#include <stack>
#include <vector>
#include <queue>

using namespace std;

int n,t,array[1000000] = {},cnt[1000000] = {},b = 0;

int main(){
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&t);
        if (t >= 0){
            array[i] = t;
        } else{
            array[i+100100] = (-t) + 100100;
        }
    }
    for(int i = 0; i < 200300; i++){
        if (array[i] != 0){
            cnt[array[i]]++;
        }
    }
    for (int i = 0; i < 200300; i++){
        if (cnt[i] != 0){
            b++;
        }
    }
    printf("%d",b);
    return 0;
}