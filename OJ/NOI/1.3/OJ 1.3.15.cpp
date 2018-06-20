//OJ 1.3.15 ????????

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int n, x, y;
	cin>>n>>x>>y;
	if (y%x == 0){
		cout<<10-(y / x);
	} else{
		cout<<10-(y / x + 1);
	}
	return 0;
} 
