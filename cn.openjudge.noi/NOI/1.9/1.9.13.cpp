//OJ 1.9.13 整数去重

#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, nums [50000];
    bool count [110] = {};
    cin>>n;
    for (int i = 0; i < n; i++)
    cin>>nums[i];
    for (int i = 0; i < n; i++){
        if (!count[nums[i]]){
            cout<<nums[i]<<' ';
            count[nums[i]] = true;
        } 
    }
	return 0;
} 
