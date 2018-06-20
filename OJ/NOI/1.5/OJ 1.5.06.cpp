//OJ 1.5.06 整数序列的元素最大跨度值

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int n,temp,max,min;
	cin>>n>>max;
    min = max;
	for (int i = 2; i <= n ; i++){
		cin>>temp;
		if (temp > max){
			max = temp;
		}
        if (temp < min){
            min = temp;
        }
	}
	cout<<(max-min);
	return 0;
} 
