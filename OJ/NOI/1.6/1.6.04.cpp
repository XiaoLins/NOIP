//OJ 1.6.04 数组逆序重放

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int n = 0;
    cin>>n;
    int nums [n];
    for (int i = 0; i < n; i++){
        cin>>nums[i];
    }
    for (int i = n - 1; i >= 0; i--){
        cout<<nums[i];
        if (i != 0){
            cout<<" ";
        }
    }
	return 0;
} 
