//OJ 1.5.14 ??????????? 

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int x,n;
	cin>>x>>n;
	double a = x;
	for (int i = 0; i < n ; i++){
		a = a * 1.001;
	}
	printf("%.4f",a);
	return 0;
} 
