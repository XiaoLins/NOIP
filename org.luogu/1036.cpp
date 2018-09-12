//luogu.org 1036 选数

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
int n,k,x[21],res[100000],cnt;

bool isPrime(int num){
    if (num % 2 == 0){
        if (num == 2){
            return true;
        } else{
            return false;
        }
    }
    int temp = sqrt(num);
    for (int i = 3; i <= temp; i+=2){
        if (num % temp == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    cin>>n>>k;
    for (int i = 0; i < n; i++){
        cin>>x[i];
    }
    return 0;
}