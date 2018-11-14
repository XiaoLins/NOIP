#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_N = 500005;
int n,bit[MAX_N],A[MAX_N],B[MAX_N],ans;

void add (int i, int x){
    while(i <= n){
        bit[i] += x;
        i += i&-i;
    }
}

int sum (int i){
    int ret = 0;
    while(i){
        ret += bit[i];
        i -= i&-i;
    }
    return ret;
}

bool comp(int a, int b){
    return A[a] > A[b];
}

int main(){
    cin>>n;
    for (int i = 1; i <= n; i++){
        cin>>A[i];
        B[i] = i;
    }
    sort(B+1,B+1+n,comp);
    for (int i = 1; i <= n; i++){
        add(i,B[i]);
        ans += sum(B[i]-1);
    }
    cout<<ans;
    return 0;
}