//luogu 1196 [NOI2002]银河英雄传说

#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

const int MAX_N = 30005;
int pre[MAX_N],front[MAX_N],num[MAX_N],t,a,b;
char order;

int find(int k){
    if(pre[k] == k) return k;
    int fn = find(pre[k]);
    front[k] += front[pre[k]];
    return pre[k] = fn;
}

int main(){
    cin>>t;
    for (int i = 1; i <= 30000; i++){
        pre[i] = i;
        front[i] = 0;
        num[i] = 1;
    }
    for (int i = 1; i <= t; i++){
        cin>>order>>a>>b;
        int fx = find(a);
        int fy = find(b);
        if (order == 'M'){
            front[fx] += num[fy];
            pre[fx] = pre[fy];
            num[fy] += num[fx];
            num[fx] = 0;
        }
        if (order == 'C'){
            if(fx!=fy) cout<<-1<<endl;
            else cout<<abs(front[a]-front[b])-1<<endl;
        }
    }
    return 0;
}