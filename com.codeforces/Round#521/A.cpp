#include <cstdio>
#include <iostream>

using namespace std;

const int MAX_T = 1005;
typedef long long ll;
ll a,b,k;
ll now;
int t;


int main(){
    cin>>t;
    while(t){
        t--;
        cin>>a>>b>>k;
        now = 0;
        now += a*(k/2+ (k%2) );
        now -= b*(k/2);
        cout<<now<<endl;
    }
    return 0;
}