#include <cstdio>
#include <iostream>

using namespace std;

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

int main(){
    int a = 3, b = 5;
    swap(&a,&b);
    cout<<a<<b;
}