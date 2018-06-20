//OJ 1.9.03 不高兴的津津

#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int schedule[2][7],max=0;
    for (int i = 0; i < 7; i++){
        cin>>schedule[0][i]>>schedule[1][i];
    }
    max = 0;
    for (int i = 1; i < 7; i++){
        if (schedule[0][max] + schedule[1][max] < schedule[0][i] + schedule[1][i]){
            max = i;
        }
    }
    cout<<max+1;
	return 0;
} 
