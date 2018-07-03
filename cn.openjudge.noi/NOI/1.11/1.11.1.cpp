//OJ 1.11.1 查找最接近的元素

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    int n,m;
    cin>>n;
    long nums[n];
    for (int i = 0; i < n; i++)
    cin>>nums[i];
    cin>>m;
    long a[m],b[m];
    for (int i = 0; i < m; i++)
    cin>>a[i];
    for (int i = 0; i < m; i++){
        int low = 0, high = n - 1, mid = (low + high) / 2;
        while (nums[mid] != a[i] && low < high){
            if (nums[mid] < a[i]){
                low = mid + 1;
            } else{
                high = mid - 1;
            }
            mid = (low + high) / 2;
        }
        b[i] = nums[mid];
    }
    cout<<b[0];
    for (int i = 1; i < m; i++){
        cout<<endl<<b[i];
    }
    return 0;
} 
