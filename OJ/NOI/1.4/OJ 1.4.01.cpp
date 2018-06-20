//OJ 1.4.01 ?��??????? 

#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main(){
	long a;
	cin>>a;
	if (a >= 0){
		if (a == 0){
			printf("zero");
		} else{
			printf("positive");
		}
	} else{
		printf("negative");
	}
	return 0;
}
