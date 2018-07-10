//OJ 1.11.1 查找最接近的元素

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    long n, map[100001], m, que[10001], low = 0, high, mid;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    scanf("%d",&map[i]);
    scanf("%d",&m);
    for (int i = 0; i < m; i++)
    scanf("%d",&que[i]);
    high = n - 1;
    mid = (low+high)/2;
    sort(map,map+n);
    for (int i = 0; i < m; i++){
        if (que[i] <= map[0]){
            printf("%d\n",map[0]);
            continue;
        }
        if (que[i] >= map[n-1]){
            printf("%d\n",map[n-1]);
            continue;
        }
        low = 0;
        high = n;
        mid = (low+high)/2;
        while(low < high){
            mid = (low+high)/2;
            if (map[mid] >= que[i]){
                high = mid;
            } else{
                low = mid + 1;
            }
        }
        if ((map[low] - que[i]) < (que[i] - map[low-1])){
            printf("%d\n",map[low]);
        } else{
            printf("%d\n",map[low-1]);
        }
    }
    return 0;
} 
