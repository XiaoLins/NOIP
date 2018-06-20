//OJ 1.5.19 救援

#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n,p;
	double total,d,x,y;
	cin>>n;
	for (int i = 0; i < n; i++){
		cin>>x>>y;
		d = sqrt(x * x + y * y);
		total += d / 25;
		cin>>p;
		total += p * 1.5;
	}
	if (total - int(total) == 0){
		cout<<(int)total;
	} else{
		cout<<(int)total+1;
	}
	return 0;
} 
