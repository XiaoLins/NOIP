//OJ 1.5.34 ?????? 

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
	int n,a,sum;
	cin>>n;
	a = 1;
	sum = 0;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= i; j++){
			a *= j;
		}
		sum += a;
		a = 1;
	}
	cout<<sum;
	return 0;
}


