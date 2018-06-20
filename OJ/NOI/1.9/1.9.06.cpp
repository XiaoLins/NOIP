//OJ 1.9.06 笨小猴

#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char word [1500];
    int count [1500];
    int minn = 9999 , maxn = 0, diff;
    cin>>word;
    for (int i = 0; i < strlen(word); i++){
        count[word[i]]++;
    }
    for (int i = 0; i < 1500; i++){
        if (count[i] < minn && count[i] != 0){
            minn = count[i];
        }
        if (count[i] > maxn){
            maxn = count[i];
        }
    }
    diff = maxn - minn;
    if (diff == 0 || diff == 1){
        cout<<"No Answer"<<endl<<0;
        return 0;
    }
    for (int i = 2; i < diff; i++){
        if (diff % i == 0){
            cout<<"No Answer"<<endl<<0;
            return 0;
        }
    }
    cout<<"Lucky Word"<<endl<<diff;
	return 0;
} 
