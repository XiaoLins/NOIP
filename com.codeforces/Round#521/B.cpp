#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

const int MAX_N = 105;
int n,a[MAX_N],cnt,adj[MAX_N];
bool disturbed[MAX_N];

int main(){
    cin>>n;
    for (int i = 1; i <= n; i++) cin>>a[i];
    for (int i = 2; i < n; i++)
        if (!a[i] && a[i-1] && a[i+1]){
            disturbed[i] = true;
        }
    for (int i = 1; i <= n; i++){
        if (disturbed[i]){
            if (i+2 <= n && disturbed[i+2]){
                disturbed[i] = false;
                disturbed[i+2] = false;
                cnt++;
            } else{
                disturbed[i] = false;
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}