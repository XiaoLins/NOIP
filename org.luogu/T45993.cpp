#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int n,m,h[200005],cnt = 0;

int main(){
    cin>>n>>m;
    for (int i = 1; i <= n ; i++){
        cin>>h[i];
    }
    for (int i = 1; i <= n-1; i++){
        for (int j = i+1; j <= n; j++){
            if(h[j] == j-i+h[i]){
                cnt++;
                continue;
            }
            if(h[i] == j-i+h[j]){
                cnt++;
                continue;
            }
            if(h[i]+h[j] == j-i){
                cnt++;
                continue;
            }
        }
    }
    cout<<cnt;
    return 0;
}