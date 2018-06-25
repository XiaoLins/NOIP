//OJ 1.5.13 ??????? 

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int a,n;
	int pro = 1;
	cin>>a>>n;
	for (int i = 0; i < n; i++){
		pro *= a;
	}
	cout<<pro;
	return 0;
} 
