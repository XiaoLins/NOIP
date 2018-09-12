//素数环

#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

bool b[21]={};
int total = 0,a[21]={};
int search(int); //回溯过程
int print(); //输出方案
bool pd(int,int); //判断素数
int main(){
    search(1);
    cout << total << endl; //输出总方案数
}

int search(int t){
    for (int i = 1; i <= 20; i++){ //有20个数可选
        if (pd(a[t-1],i) && (!b[i])){
            a[t] = i;
            b[i] = true;
            if (t == 20){
                if (pd(a[20],a[1])){
                    print();
                }
            } else{
                search(t+1);
            }
            b[i] = false;
        }
    }
}

int print(){
    total++;
    cout<<"<"<<total<<">";
    for (int j = 1; j <= 20; j++){
        cout<<a[j]<<" ";
    }
    cout<<endl;
}

bool pd(int x, int y){
    int k = 2, i = x + y;
    while (k <= sqrt(i) && i%k != 0){
        k++;
    }
    if (k > sqrt(i)){
        return true;
    } else{
        return false;
    }
}