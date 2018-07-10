//luogu.org 1046 陶陶摘苹果

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int height,count = 0;
    int apples [10];
    for (int i = 0; i < 10; i++){
        cin>>apples[i];
    }
    cin>>height;
    height += 30;
    for (int i = 0; i < 10; i++){
        if (apples[i] <= height){
            count++;
        }
    }
    cout<<count;
	return 0;
} 
