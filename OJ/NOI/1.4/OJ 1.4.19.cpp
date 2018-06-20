//OJ 1.4.19 ???????? 

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int a,b;
	char o;
	cin>>a>>b>>o;
	switch (o){
		case('+'):
			cout<<a+b;
			break;
		case('-'):
			cout<<a-b;
			break;
		case('*'):
			cout<<a*b;
			break;
		case('/'):
			if(b != 0){
				cout<<a/b;
			} else{
				cout<<"Divided by zero!";
			}
			break;
		default:
			cout<<"Invalid operator!";
			break;
	}
	return 0;
} 
