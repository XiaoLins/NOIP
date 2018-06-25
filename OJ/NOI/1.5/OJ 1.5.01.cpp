//OJ 1.5.01 ????????? 

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
	double age;
	int n,temp;
	cin>>n;
	for (int i = 0; i < n ; i++){
		cin>>temp;
		age += temp;
	}
	printf("%.02f",age/n);
	return 0;
} 
