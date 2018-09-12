#include <cstdio>
#include <iostream>
#include <iomanip>

using namespace std;

int num = 0, a [10001] = {}, n,r;
bool b[10001] = {};
int search(int);
int print();
int main(){
    cin>>n>>r;
    search(1);
    cout<<"total = "<<num<<endl;
}

int search(int k){
    for (int i = 1; i<= n; i++){
        if(!b[i]){
            a[k] = i;
            b[i] = true;
            if(k == r){
                print();
            } else{
                search(k+1);
            }
            b[i] = false;
        }
    }
}

int print(){
    num++;
    for(int i = 1; i<=r; i++){
        cout<<setw(3)<<a[i];
    }
    cout<<endl;
}