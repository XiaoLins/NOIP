//OJ 1.9.01 查找特定的值

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int n,nums [10000], num;
    cin>>n;
    for (int i = 0 ; i < n; i++){
        cin>>nums[i];
    }
    cin>>num;
    for (int i = 0; i < n; i++){
        if (num == nums[i]){
            cout<<i+1;
            return 0;
        }
    }
    cout<<-1;
	return 0;
} 
