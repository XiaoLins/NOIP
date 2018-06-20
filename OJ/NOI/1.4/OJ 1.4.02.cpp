//OJ 1.4.02 ???????? 

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	double a;
	cin>>a;
	if (a < 0){
		a = -a;
	}
	printf("%.2f",a);
	return 0;
} 
