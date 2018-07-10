//OJ 1.9.07 不与最大数相同的数字之和

#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int n, max, min, sum = 0;
    cin>>n;
    int nums [n];
    for (int i = 0; i < n; i++){
        cin>>nums[i];
    }
    max = nums[0];
    min = nums[0];
    for (int i = 0; i < n; i++){
        if (nums[i] < min){
            min = nums[i];
        }
        if (nums[i] > max){
            max = nums[i];
        }
    }
    for (int i = 0; i < n; i++){
        if (nums[i] != max){
            sum += nums[i];
        }
    }
    cout<<sum;
	return 0;
} 
