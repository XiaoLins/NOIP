//OJ 1.10.9 明明的随机数

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    int n,count = 0;
    bool exist[10000] = {};
    cin>>n;
    int nums[n];
    for (int i = 0; i < n; i++)
    cin>>nums[i];
    for (int i = 0; i < n; i++){
        if (!exist[nums[i]]){
            count++;
            exist[nums[i]] = true;
        } else{
            nums[i] = 0;
        }
    }
    sort(nums,nums+n);
    cout<<count<<endl<<nums[n-count];
    for (int i = n - count + 1; i < n; i++){
        cout<<" "<<nums[i];
    }
	return 0;
} 
