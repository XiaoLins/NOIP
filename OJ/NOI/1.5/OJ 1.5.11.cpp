//OJ 1.5.11 ????????? 

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
	int k,d,a,b,c;
	cin>>k;
	b = 0;
	for (int i = 0; i < k; i++){
		cin>>d;
		if (d == 1){
			a++;
		} else if (d == 5){
			b++;
		} else if (d == 10){
			c++;
		}
	}
	cout<<a<<endl<<b<<endl<<c;
	return 0;
}


