//OJ 1.9.12 最长平台

#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, max = 1, temp = 1, num;
    cin>>n;
    int nums [n];
    for (int i = 0; i < n; i++)
    cin>>nums[i];
    num = nums[0];
    for (int i = 1; i < n; i++){
        if (nums[i] == num){
            temp++;
            if (max < temp){
                max = temp;
            }
        } else{
            num = nums[i];
            temp = 1;
        }
    }
    cout<<max;
	return 0;
} 
