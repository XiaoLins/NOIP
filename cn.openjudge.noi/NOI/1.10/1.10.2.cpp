//OJ 1.10.2 奇数单增序列

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	int n, nums[1000], newnums[1000] = {};
    bool first = true;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>nums[i];
    }
    for (int i = 0; i < n; i++){
        if (nums[i] % 2 == 1){
            newnums[i] = nums[i];
        }
    }
    sort(newnums,newnums+n);
    for (int i = 0; i < n; i++){
        if (newnums[i] != 0){
            if (first){
                cout<<newnums[i];
                first = false;
            } else{
                cout<<','<<newnums[i];
            }
        }
    }
	return 0;
} 
