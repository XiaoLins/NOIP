#include <cstdio>
#include <iostream>

using namespace std;

struct stack{
    int a[100001];
    int top;
    void init(){
        top = 0;
    }
    void push(int x){
        a[++top] = x;
    }
    void pop(){
        if(top)
        top--;
    }
    int size(){
        return top;
    }
    int query(){
        return a[top];
    }

};

