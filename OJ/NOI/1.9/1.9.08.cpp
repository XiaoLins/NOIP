//OJ 1.9.08 白细胞计数

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n;
    double nums[400], sum = 0, avg, maxDiff;
    cin>>n;
    for (int i = 0; i < n; i++)
    cin>>nums[i];
    sort(nums,nums+n);
    for (int i = 1; i < n - 1; i++){
        sum += nums[i];
    }
    avg = sum / (n - 2);
    maxDiff = abs(avg - nums[1]);
    for (int i = 2; i < n - 1; i++){
        if (abs(avg-nums[i]) > maxDiff){
            maxDiff = abs(avg-nums[i]);
        }
    }
    printf("%.2f %.2f", avg, maxDiff);
	return 0;
} 
