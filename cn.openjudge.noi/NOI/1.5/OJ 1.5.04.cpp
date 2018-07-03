//OJ 1.5.04 ????????????? 

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
	int n,d,sum;
	double average;
	sum = 0;
	average = 0;
	cin>>n;
	for (int i = 0; i < n; i++){
		cin>>d;
		sum += d;
	}
	average = double(sum) / double(n);
	printf("%d %.5f", sum, average);
	return 0;
}


