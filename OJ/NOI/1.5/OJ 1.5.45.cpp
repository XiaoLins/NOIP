//OJ 1.5.45 ??? 

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int t,pt,c,count,sum;
	cin>>t;
	pt = 1;
	c = 1;
	sum = 0;
	count = 0;
	while(pt <= t){
		sum += c;
		count++;
		pt++;
		if (count == c){
			c++;
			count = 0;
		}
	}
	cout<<sum;
	return 0;
} 
