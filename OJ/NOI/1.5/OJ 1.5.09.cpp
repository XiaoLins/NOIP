﻿//OJ 1.5.09 ??????? 

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
	int m,n,sum=0;
	cin>>m>>n;
	for (int i = m; i <= n; i++){
		if(i % 2 != 0){
			sum += i;
		}
	}
	cout<<sum;
	return 0; 
} 
