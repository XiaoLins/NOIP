//OJ 1.5.35 ???e??? 

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
	double n,e,a;
	e = 1;
	a = 1;
	cin>>n;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= i; j++){
			a *= j;
		}
		e += (1 / a);
		a = 1;
	}
	printf("%.10f",e);
	return 0;
}


