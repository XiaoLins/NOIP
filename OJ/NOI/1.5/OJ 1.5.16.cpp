//OJ 1.5.16 ???? 

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
	int N,K,D,W,P;
	cin>>N>>K;
	P = 200;
	W = 0;
	D = 0;
	while (W < P){
		W += N;
		P += 200 * K;
		D++;
	}
	if (D <= 20){
		cout<<D;
	} else{
		cout<<D;
		cout<<"Impossible";
	}
} 
