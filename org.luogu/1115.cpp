#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>

int now,ans,tmp,n;

int main(){
    scanf("%d",&n);
    scanf("%d",&now);
    ans = now;
    if (now > 0) tmp = now;
    for (int i = 2; i <= n; i++){
        scanf("%d",&now);
        tmp += now;
        if (tmp > ans) ans = tmp;
        if (tmp < 0) tmp = 0;
    }
    printf("%d",ans);
    return 0;
}