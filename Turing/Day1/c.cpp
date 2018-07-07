#include <cstdio>
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

long long cal(long long n1, long long k){
    long long alice = 0, bob = 0;
    long long n = n1;
    while (n > 0){
        if (k >= n){
            alice += n;
            n = 0;
            break;
        } else {
            alice += k;
            n = n - k;
        }
        if (n > 10){
            bob += (long long)(n * 0.1) - ((long long)(n * 0.1) % 1 );
            n -= (long long)(0.1 * n) - ((long long)(n * 0.1) % 1 );
        } 
    }
    if (alice > bob){
        return k;
    } else{
        return cal(n1, k+1);
    }
}

int main(){
    int n,k,now;
    cin>>n;
    k = cal(n, 1);
    cout<<k;
}