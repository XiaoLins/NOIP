//OJ 1.3.14 ?????? 

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int h,r;
	cin>>h>>r;
	const double PI = 3.14159;
	double s = h * r * r * PI;
	double amount = 20000 / s;
	if (amount > int(amount)){
		amount++;
	}
	cout<<int(amount);
	return 0;
}  
