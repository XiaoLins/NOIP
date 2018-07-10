//OJ 1.7.01 统计数字字符个数

#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char a[256];
    int cnt = 0;
    gets(a);
    for (int i = 0; i < strlen(a); i++){
        if (a[i] <= '9' && a[i] >= '0'){
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}