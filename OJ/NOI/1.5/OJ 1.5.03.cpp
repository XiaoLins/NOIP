//OJ 1.5.03 ??? 

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int n;
	double a,sum;
	cin>>n;
	for (int i = 0; i < n; i++){
		cin>>a;
		sum += a;
	}
	sum /= n;
	printf("%.4f",sum);
	return 0;
} 
