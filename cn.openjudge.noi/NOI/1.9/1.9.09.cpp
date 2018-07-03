//OJ 1.9.09 直方图

#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, max;
    cin>>n;
    int nums[n], count[10000] = {};
    for (int i = 0; i < n; i++)
    cin>>nums[i];
    max = nums[0];
    for (int i = 1; i < n; i++){
        if (nums[i] > max){
            max = nums[i];
        }
    }
    for (int i = 0; i <= max; i++){
        for (int j = 0; j < n; j++){
            if (i == nums[j]){
                count[i]++;
            }
        }
        cout<<count[i]<<endl;
    }
	return 0;
} 
