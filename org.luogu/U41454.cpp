//luogu U41454 解密QQ号

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

// queue<int> result,wait;
// int n,x,cnt;

// int main(){
//     scanf("%d",&n);
//     for (int i = 1; i <= n ; i++){
//         scanf("%d",&x);
//         wait.push(x);
//     }
//     while(!wait.empty()){
//         x = wait.front(); wait.pop();
//         if (cnt % 2 == 0){
//             result.push(x);
//         } else{
//             wait.push(x);
//         }
//         cnt++;
//     }
//     while(!result.empty()){
//         x = result.front(); result.pop();
//         printf("%d ", x);
//     }
//     return 0;
// }

const int MAX_N = 1005;
int ans[MAX_N],nums[MAX_N],n,status = 4,cnt = 0;

int main(){
    scanf("%d",&n);
    for (int i = 1; i <= n; i++){
        scanf("%d",nums[i]);
    }
    for (int i = 1; i <= n; i+=2){
        ans[i] = nums[i/2+1];
        cnt++
    }
    while(cnt<n){
        for (int i = cnt+1; i <= (n-cnt)/2; i++){
            ans[status*i] = nums[i];
            cnt++;
        }
        status += 2;
    }
}