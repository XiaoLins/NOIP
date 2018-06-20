//OJ 1.3.13 ????????????��??

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int a, b, c, d;
	cin>>a;
	b = a/100;
	c = a/10 - b*10;
	d = a - b*100 - c*10;
	cout<<d<<c<<b;
	return 0;
} 
