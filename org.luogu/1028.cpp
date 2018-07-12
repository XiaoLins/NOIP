//luogu.org 1028 数的计算

#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;
int cnt = 1, n, f[1011];

// n%2==0时
//     f(n)=f(n-1)+f(n/2)
// n%2==1时
//     f(n)=f(n-1)


int main()
{
    cin>>n;
    f[0] = f[1] = 1;
    for(int i = 2; i <= n; i++){
        if(i%2 == 0){
            f[i] = f[i-1] + f[i/2];
        } else{
            f[i] = f[i-1];
        }
    }
    cout<<f[n];
    return 0;
}