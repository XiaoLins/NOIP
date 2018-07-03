//OJ 1.5.05 最高的分数

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int n,temp,max;
	cin>>n>>max;
	if (n == 1){
		cout<<max;
		return 0;
	}
	for (int i = 2; i <= n ; i++){
		cin>>temp;
		if (temp > max){
			max = temp;
		}
	}
	cout<<max;
	return 0;
} 
