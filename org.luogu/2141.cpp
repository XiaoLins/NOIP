//luogu.org 2141 珠心算测验

#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

bool occupied[30002] = {};
int cnt=0,n,t,g[30002];
vector<int> nums;

int main(){
    cin>>n;
    nums.push_back(0);
    for (int i = 1; i <= n; i++){
        cin>>t;
        occupied[t] = true;
        nums.push_back(t);
    }
    for (int i = 1; i <= n-1; i++){
        for (int j = i+1; j <= n; j++){
            g[nums[i]+nums[j]]++;
        }
    }
    for (int i = 1; i <= 20005; i++){
        if(g[i]>0&&occupied[i]){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}