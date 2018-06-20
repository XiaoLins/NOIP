//OJ 1.10.6 整数奇偶排序

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    int nums[10];
    for (int i = 0; i < 10; i++)
    cin>>nums[i];
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 9; j++){
            if (nums[j]%2 == nums[j+1]%2){
                if (nums[j] % 2 == 1 && nums[j] < nums[j+1]){
                    swap(nums[j],nums[j+1]);
                } else if (nums[j] % 2 == 0 && nums[j] > nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            } else if (nums[j] % 2 == 0){
                swap(nums[j],nums[j+1]);
            }
        }
    }
    cout<<nums[0];
    for (int i = 1; i < 10; i++){
        cout<<" "<<nums[i];
    }
	return 0;
} 
