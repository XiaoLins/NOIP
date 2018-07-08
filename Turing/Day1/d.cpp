#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;
//00X00X0XXX0
//0XXX0X00X00
int main(){
    char map[4][105];
    scanf("%s",map[1]);
    scanf("%s",map[2]);
    int count = 0, put = 0;
    for (int i = 0; i < (int)strlen(map[1]); i++){
        count = 0;
        if(map[1][i] == '0')
        count++;
        if(map[1][i+1] == '0')
        count++;
        if(map[2][i] == '0')
        count++;
        if(map[2][i+1] == '0')
        count++;
        if(count == 3){
            map[1][i] = 'X';
            map[1][i+1] = 'X';
            map[2][i] = 'X';
            map[2][i+1] = 'X';
            put++;
        } else if (count == 4){
            map[1][i] = 'X';
            map[1][i+1] = 'X';
            map[2][i] = 'X';
            put++;
        }
    }
    printf("%d",put);
    return 0;
    
}