#include <cstdio>
#include <iostream>
#include <algorithm>

int cnt = 0,head = 0;
int val[100],nxt[100];

void insert(int x, int y, int num){
    cnt++;
    val[cnt] = num;
    nxt[x] = cnt;
    nxt[cnt] = y;
}

void insert_end(int num){
    cnt++;
    val[cnt] = num;
    nxt[cnt-1] = cnt;
}

void del(int x){

}

int main(){
    int x; scanf("%d",&x);
    int a; scanf("%d",&a);
    val[0] = a;
    for (int i = 1; i < x; i++){
        int a; scanf("%d",&a);
        insert_end(a);
    }
    for (int i = 0; i < x; i++){
        printf("%d\n",val[i]);
    }
}

