//OJ 1.10.10 单词排序

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    int n = 0;
    string words[101];
    while(cin>>words[n++]);
    sort(words,words+n);
    for (int i = 1; i < n; i++){
        if (words[i+1] != words[i]){
            cout<<words[i]<<endl;
        }
    }
    return 0;
} 
