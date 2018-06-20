//OJ 1.5.15 ??????? 

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int R,M,Y;
	cin>>R>>M>>Y;
	double rate,fin;
	rate = (100 + double(R)) / 100;
	fin = M;
	for (int i = 0; i < Y; i++){
		fin *= rate;
	}
	cout<<int(fin);
	return 0;
} 
