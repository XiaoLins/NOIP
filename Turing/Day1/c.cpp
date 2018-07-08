#include <cstdio>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <utility>
#include <stack>

using namespace std;

long long int n,now,low = 1,high,mid,alice;

bool check(long long int k){
    now = n;
    alice = 0;
    while(now){
        if (now >= k){
            now -= k;
            alice += k;
        } else{
            alice += now;
            break;
        }
        long long int temp = now / 10;
        now -= temp;
    }
    return alice >= (n - alice);
}

int main(){
    scanf("%lld",&n);
    high = n;
    while (low < high){
        mid = (low + high)>>1;
        if (check(mid)){
            high=mid;
        } else{
            low=mid+1;
        }
    }
    printf("%lld",high);
    return 0;
}