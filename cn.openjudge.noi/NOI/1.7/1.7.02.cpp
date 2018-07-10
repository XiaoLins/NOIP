//OJ 1.7.02 找第一个只出现一次的字符

#include <cstdio>
#include <iostream>

using namespace std;


int main(){
    string a;
    int c = 0;
    cin>>a;
    for (int i = 0; i < a.size(); i++){
        c = 0;
        for (int j = 0; j < a.size(); j++){
            if(a[i] == a[j]){
                c++;
            }
        }
        if(c == 1){
            printf("%c",a[i]);
            return 0;
        }
    }
    printf("no");
    return 0;
}