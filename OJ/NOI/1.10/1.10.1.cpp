//OJ 1.10.1 谁考了第k名

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	int n,k,nums[111],index = 0;
    double grade[111], temp;
    cin>>n>>k;
    for (int i = 0; i < n; i++){
        cin>>nums[i]>>grade[i];
    }
    for (int i = 0; i < n; i++){
        index = i;
        for (int j = i + 1; j < n; j++){
            if (grade[j] > grade[index]){
                index = j;
            }
        }
        if (index != i){
            swap(grade[i],grade[index]);
            swap(nums[i],nums[index]);
        }
    }
    printf("%d %g", nums[k-1], grade[k-1]);
	return 0;
} 
