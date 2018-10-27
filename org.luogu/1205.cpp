//luogu 1205 [USACO1.3]混合牛奶 Mixing Milk

#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

struct farmer{
    int p,q;
};

const int MAX_N = 2000005,MAX_M = 5005;
int n,m,ans,now,cnt = 1;
farmer a[MAX_M];

bool comp(farmer x, farmer y){
    return x.p<y.p;
}

int main(){
    cin>>n>>m;
    for (int i = 1; i <= m; i++){
        cin>>a[i].p>>a[i].q;
    }
    sort(a+1,a+1+m,comp);
    while(now < n){
        if (a[cnt].q <= 0) cnt++;
        ans += a[cnt].p;
        now++;
        a[cnt].q--;
    }
    cout<<ans;
    return 0;
}