//OJ 1.6.01 与指定数字相同的数的个数 

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int n,m,count = 0;
    cin>>n;
    int nums [n];
    for (int i = 0; i < n; i++){
        cin>>nums[i];
    }
    cin>>m;
    for (int i = 0; i < n; i++){
        if (nums[i] == m){
            count++;
        }
    }
    cout<<count;
	return 0;
} 
