//luogu.org 1036 选数

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;
int n,k,a[23],cnt=0;
bool visited[23] = {};

bool isPrime(int num){
    if (num <= 1){
        return false;
    } else if (num == 2){
        return true;
    } else if (num % 2 == 0){
        return false;
    } 
    for (int i = 3 ; i <= sqrt(num); i +=2){
        if (num%i == 0){
            return false;
        }
    }
    return true;
}

void search(int step, int sum, int mx){
    if (step == k){
        if(isPrime(sum)){
            cnt++;
            //cout<<"cnt = "<<cnt<<", sum = "<<sum<<", mx = "<<mx<<endl;
        }
        return;
    }
    for (int i = mx; i <= n; i++){
        if(!visited[i]){
            visited[i] = true;
            search(step+1,sum+a[i],i+1);
            visited[i] = false;
        }
    }
}

int main(){
    cin>>n>>k;
    for(int i = 1; i <= n; i++){
        cin>>a[i];
    }
    search(0,0,1);
    cout<<cnt;
    return 0;
}