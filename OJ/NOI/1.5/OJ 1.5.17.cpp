//OJ 1.5.17 ?????????? 

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int k,sum,a1,a2;
	cin>>k;
	if (k <= 2){
		cout<<1;
		return 0;
	}
	a1 = 1;
	a2 = 1;
	for (int i = 2; i < k; i++){
		sum = a1 + a2;
		a1 = a2;
		a2 = sum;
	}
	cout<<sum;
	return 0;
} 
