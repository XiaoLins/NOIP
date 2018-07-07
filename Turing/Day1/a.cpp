#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    int A,B,C,N,A2,B2,num;
    cin>>A>>B>>C>>N;
    A2 = A - C;
    B2 = B - C;
    if (A2 < 0 || B2 < 0){
        cout<<-1;
        return 0;
    }
    num = N - C - A2 - B2;
    if (num > 0){
        cout<<num;
    } else{
        cout<<-1;
    }
    return 0;
}