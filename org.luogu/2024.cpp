#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

const int MAX_N = 150005, MAX_K = 100005, FRIEND = 1, ENEMY = 2;
int n,k,pre[MAX_N],cnt;

int find (int k){
    if (pre[k] == k) return k;
    return pre[k] = find(pre[k]);
}

void join (int x, int y){
    int fx = find(x), fy = find(y);
    if (fx != fy) pre[fx] = fy;
}

int main(){
    cin>>n>>k;
    int status,x,y;
    for (int i = 1; i <= 3*n; i++) pre[i] = i;
    while(k){
        k--;
        cin>>status>>x>>y;
        if (x > n || y > n){
            cnt++;
            continue;
        }
        if (status == 1){
            if (find(x+n) != find(y) && find(x) != find(y+n)){
                join(x,y); join(x+n,y+n); join(x+2*n,y+2*n);
            } else{
                cnt++;
            }
        } else if (status == 2) {
            if (find(x) != find(y) && find(x) != find(y+n)){
                join(x,y+2*n); join(x+n,y); join(x+2*n,y+n);
            } else{
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}