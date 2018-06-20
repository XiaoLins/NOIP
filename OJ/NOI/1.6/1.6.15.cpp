//OJ 1.6.15 阶乘和

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int n = 1;
    int sum = 1;
    cin>>n;
    int nums [50] = {1};
    for (int i = 1; i < n; i++){
        nums[i] = nums[i-1] * (i + 1);
        sum += nums[i];
    }
    cout<<sum;
	return 0;
} 
