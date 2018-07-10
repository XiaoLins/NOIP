//OJ 1.6.03 计算书费

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	double count [10];
    double price [10] = {28.9, 32.7, 45.6, 78.0, 35.0, 86.2, 27.8, 43.0, 56.0, 65.0};
    double total = 0;
    for (int i = 0; i < 10; i++){
        cin>>count[i];
        total += count[i] * price[i];
    }
    cout<<total;
	return 0;
} 
