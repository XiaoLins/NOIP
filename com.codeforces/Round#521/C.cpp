#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

const int MAX_N = 200005;
typedef unsigned long long ll;
ll n,a[MAX_N],sum[MAX_N],max1,max2,cnt;
vector<int> ans;

int main(){
    cin>>n;
    sum[0] = 0;
    for (int i = 1; i <= n; i++){
        cin>>a[i];
        sum[i] = sum[i-1] + a[i];
    }
    if (a[1] > a[2]){
        max1 = 1;
        max2 = 2;
    } else{
        max1 = 2;
        max2 = 1;
    }
    for (int i = 3; i <= n; i++){
        if (a[i] > a[max2]){
            max2 = i;
            if (a[max2] > a[max1]){
                int temp = max2;
                max2 = max1;
                max1 = temp;
            }
        }
    }
    //printf("max1 = %d, max2 = %d\n",max1,max2);
    for (int i = 1; i <= n; i++){
        int mx;
        if (i == max1){
            mx = max2;
        } else{
            mx = max1;
        }
        ll other;
        other = sum[n] - a[i] - a[mx];
        if (other == a[mx]){
            ans.push_back(i);
            cnt++;
        }
    }
    cout<<cnt<<endl;
    for (int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<' ';
    }
    return 0;
}