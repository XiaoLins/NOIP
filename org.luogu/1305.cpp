#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

struct tree{
    char data;
    char left;
    char right;
};

int n;
tree a[1000];

void print(char data){
    if (data == '*'){
        return;
    } else{
        for (int i = 1; i <= n; i++){
            if (a[i].data == data){
                cout<<data;
                print(a[i].left);
                print(a[i].right);
            }
        }

    }
}

int main(){
    cin>>n;
    char now,l,r;
    for (int i = 1; i <= n; i++){
        cin>>a[i].data>>a[i].left>>a[i].right;
    }
    print(a[1].data);
    return 0;
}