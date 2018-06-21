//OJ 1.5.08 ????????? 

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int n,sum,angle;
	cin>>n;
	sum = (n - 2)*180;
	for (int i = 0; i < n - 1; i++){
		cin>>angle;
		sum -= angle;
	}
	cout<<sum;
	return 0;
} 
