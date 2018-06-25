//OJ 1.4.21 ????????2

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int n, x, y;
	cin>>n>>x>>y;
	if (y > n * x){
		cout<<0;
	} else{
		if (y%x == 0){
			cout<<10-(y / x);
		} else{
			cout<<10-(y / x + 1);
		}
	}
	return 0;
} 
