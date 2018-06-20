//OJ 1.5.07 奥运金牌计数

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int n,gold,silver,copper,total,temp;
	cin>>n;
	gold = 0;
	silver = 0;
	copper = 0;
	for (int i = 0; i < n ; i++){
		cin>>temp;
		gold += temp;
		cin>>temp;
		silver += temp;
		cin>>temp;
		copper += temp;
	}
	total = gold + silver + copper;
	cout<<gold<<" "<<silver<<" "<<copper<<" "<<total;
	return 0;
} 
