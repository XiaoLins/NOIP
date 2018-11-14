#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>

using namespace std;

const int MAX_N = 100005;
bool prime[MAX_N];
int a,b,p,pre[MAX_N],cnt;
bool cnted[MAX_N];

void seive(int n){
    memset(prime,1,sizeof(prime));
    for (int i = 2; i <= n; i++){
        if (prime[i]){
            for (int j = 2*i; j <= n; j += i){
                prime[j] = false;
            }
        }
    }
}

// int gcd(int a, int b){
//     if(b == 0) return a;
//     return gcd(b,a%b);
// }

int find(int k){
    if (pre[k] == k) return k;
    return pre[k] = find(pre[k]);
}

void join(int x, int y){
    int fx = find(x), fy = find(y);
    if (fx != fy){
        pre[fx] = fy;
    }
}

int main(){
    scanf("%d%d%d",&a,&b,&p);
    int fi,fj,g;
    seive(b);
    for (int i = 1; i <= b; i++){
        pre[i] = i;
    }
    //int ans = a-b+1;
    //memset(prime,1,sizeof(prime));
    for (int i = p; i <= b; i++){
        if(prime[i]){
            for (int j = i*2; j <= b; j += i){
                if(j-i>=a) join(j-i,j);
            }
        }
    }
    for (int i = a; i <= b; i++){
        fi = find(i);
        //cout<<"find("<<i<<") = "<<find(i)<<endl;
        if(!cnted[fi]){
            cnt++;
            cnted[fi] = true;
        }
    }
    printf("%d",cnt);
    return 0;
}