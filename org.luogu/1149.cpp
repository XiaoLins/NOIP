//luogu.org 1149 火柴棒等式

#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int n,result = 0;
int xu[10] = {6,2,5,5,4,5,6,3,7,6};

int matches(int num){    
    int i,k=0;       
    for(i=num;i!=0;i/=10)
    k+=xu[i%10];    
    if(num==0)
    k+=xu[0];      
    return k;
}

int main() {
    cin>>n;
    for (int i = 0; i <= 1000; i++){
        for (int j = 0; j <= 1000; j++){
            if(matches(i)+matches(j)+matches(i+j)+4 == n){
                result++;
            }
        }
    }
    cout<<result;
    return 0;
}