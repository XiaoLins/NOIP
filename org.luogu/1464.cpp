#include <cstdio>
#include <iostream>

using namespace std;

typedef long long ll;
ll f[23][23][23];
ll a,b,c;
bool visited[23][23][23];

ll w(ll a, ll b, ll c){
    if (a <= 0 || b <= 0 || c <= 0){
        return 1;
    } else if (a > 20 || b > 20 || c > 20){
        return f[20][20][20] = w(20,20,20); 
    } else if (visited[a][b][c]){
        return f[a][b][c];
    } else if (a < b && b < c){
        visited[a][b][c] = true;
        return f[a][b][c] = w(a,b,c-1) + w(a,b-1,c) - w(a,b-1,c-1);
    } else{
        visited[a][b][c] = true;
        return f[a][b][c] = w(a-1,b,c) + w(a-1,b-1,c) + w(a-1,b,c-1) - w(a-1,b-1,c-1);
    }
}

int main(){
    while(true){
        cin>>a>>b>>c;
        if (a == -1 && b == -1 && c == -1) break;
        printf("w(%lld, %lld, %lld) = %lld\n",a,b,c,w(a,b,c));
    }
    return 0;
}