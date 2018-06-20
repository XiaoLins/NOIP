//OJ 1.6.09 向量点积
#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, x[1000], y[1000];
    long long sum = 0;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>x[i];
    }
    for (int i = 0; i < n; i++){
        cin>>y[i];
    }
    for (int i = 0; i < n; i++){
        sum += x[i] * y[i];
    }
    cout<<sum;
	return 0;
} 
