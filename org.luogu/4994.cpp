#include <cstdio>
#include <iostream>

using namespace std;

int fib[5],m,cnt = 2;

int main(){
	cin>>m;
	fib[0] = 0;
	fib[1] = 1;
	while(true){
		fib[2] = (fib[0] + fib[1]);
		if (fib[1] == 0 && fib[2] == 1){
			printf("%d",cnt-1);
			return 0;
		}
		fib[0] = fib[1]%m;
		fib[1] = fib[2]%m;
		cnt++;
	}
	return 0;
}
