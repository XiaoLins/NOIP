//OJ 1.7.03 基因相关性

#include <cstdio>
#include <iostream>

using namespace std;


int main(){
    string a,b;
    double rate,cnt=0,total,cal;
    cin>>rate>>a>>b;
    total = a.length();
    for (int i = 0; i < a.length(); i++){
        if (a[i] == b[i]){
            cnt++;
        }
    }
    cal = cnt / total;
    if (cal >= rate){
        printf("yes");
    } else{
        printf("no");
    }
    return 0;
}