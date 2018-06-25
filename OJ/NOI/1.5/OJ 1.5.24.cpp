//OJ 1.5.24 ?????? 

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
	int n,count,a,b,max;
	cin>>n;
	count = 0;
	max = 0;
	for (int i = 0; i < n; i++){
		cin>>a>>b;
		if (a >= 90 && a <= 140 && b >= 60 && b <= 90){
			count++;
		} else{
			count = 0;
		}
		if (count > max){
			max = count;
		}
	}
	cout<<max;
	return 0;
}


