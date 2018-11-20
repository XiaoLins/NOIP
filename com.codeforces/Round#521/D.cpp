#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct abc{
    int id,cnt;
};

const int MAX_N = 200005;
int n,k,a[MAX_N],now;
abc cnt[MAX_N];

bool comp(abc a, abc b){
    return a.cnt > b.cnt;
}

int main(){
    cin>>n>>k;
    for (int i = 1; i <= n; i++){
        scanf("%d",&a[i]);
        cnt[i].id = i;
        cnt[a[i]].cnt++;
    }
    sort(cnt+1,cnt+1+n,comp);
    for (int i = 1; i <= k; i++){
        
    }
}