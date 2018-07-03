//OJ 1.9.05 最大值和最小值的差

#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int n,max,min,nums[10002];
    cin>>n;
    for (int i = 0; i < n ; i++){
        cin>>nums[i];
    }
    max = nums[0];
    min = nums[0];
    for (int i = 1; i < n; i++){
        if (nums[i] > max){
            max = nums[i];
        }
        if (nums[i] < min){
            min = nums[i];
        }
    }
    cout<<max-min;
	return 0;
} 
