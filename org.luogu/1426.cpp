#include <cstdio>
#include <iostream>

using namespace std;

double s,x;
double now = 0.0 ,go = 7.0;
bool in = false;

int main(){
    cin>>s>>x;
    while(true){
        if (now >= s-x){
            if (!in){
                in = true;
            } else if (now <= s+x){
                printf("y");
                break;
            } else if (now >= s+x){
                printf("n");
                break;
            }
        }
        now += go;
        go *= 0.98;
    }
    return 0;
}