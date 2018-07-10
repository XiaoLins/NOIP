//OJ 1.4.20 ???????��????? 

#include <cstdio>
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double a,b,c,delta;
	cin>>a>>b>>c;
	delta = b*b-4*a*c;
	if (delta >= 0){
		if (delta == 0){
			printf("x1=x2=%.5f", (-b + sqrt(b*b-4*a*c))/(2*a));
		} else{
			printf("x1=%.5f;x2=%.5f", (-b + sqrt(b*b-4*a*c))/(2*a), (-b - sqrt(b*b-4*a*c))/(2*a));
		}
	} else{
		if (-b / (2*a) == 0){
			printf("x1=0.00000+%.5fi;x2=0.00000-%.5fi", sqrt(4*a*c-b*b) / (2*a), sqrt(4*a*c-b*b) / (2*a));	
		} else{
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi", -b / (2*a), sqrt(4*a*c-b*b) / (2*a), -b / (2*a), sqrt(4*a*c-b*b) / (2*a));	
		}
	}
	return 0;
}
