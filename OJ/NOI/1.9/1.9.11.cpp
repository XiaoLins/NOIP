//OJ 1.9.11 连续出现的字符

#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(){
    int k, temp = 1;
    char x[1005], tempChar;
    cin>>k>>x;
    if (k == 1){
        cout<<x[0];
        return 0;
    }
    for (int i = 1; i < strlen(x); i++){
        tempChar = x[i];
        if (tempChar == x[i-1]){
            temp++;
        } else{
            temp = 1;
        }
        if (temp == k){
            cout<<tempChar;
            return 0;
        }
    }
    cout<<"No";

	return 0;
} 
