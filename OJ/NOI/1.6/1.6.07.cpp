//OJ 1.6.07 有趣的跳跃
#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	long n,nums[3000],diff[3000];
    cin>>n;
    if (n == 1){
        cout<<"Jolly";
        return 0;
    }
    for (int i = 0; i < n; i++){
        cin>>nums[i];
    }
    for (int i = 0; i < n - 1; i++){
        diff[i] = abs(nums[i + 1] - nums[i]);
    }
    for (int i = 0; i < n - 1; i++){
        int index = i, temp;
        for (int j = i + 1; j < n - 1; j++){
            if(diff[j] < diff[index]){
                index = j;
            }
        }
        if (index != i){
            temp = diff[i];
            diff[i] = diff[index];
            diff[index] = temp;
        }
    }
    for (int i = 0; i < n - 1; i++){
        if (diff[i] != i + 1){
            cout<<"Not jolly";
            return 0;
        }
    }
    cout<<"Jolly";
	return 0;
} 
