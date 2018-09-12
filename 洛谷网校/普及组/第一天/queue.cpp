#include <cstdio>
#include <iostream>

using namespace std;

struct queue{
    int q[100001];
    int l,r; //l是头，r是尾
    void init(){
        l = 0;
        r = 0;
    }
    void push(int x){
        if (r <= 100000){
            q[++r] = x;
        } else{
            r = 1;
            q[r] = x;
        }
    }
    void pop(){
        if (l <= 100000){
            r++;
        } else{
            r = 1;
        }
    }
    int front(){
        return q[l];
    }
    int size(){
        if (l<r){
            return r-l;
        } else{
            return l-r+1;
        }
    }
    bool empty(){
        return l==r;
    }
};