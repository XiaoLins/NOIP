#include <cstdio>
#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

// struct edge{
//     char status;
//     int a,b;
// };

const int MAX_N = 10005, MAX_M = 50005;
//edge G[MAX_M];
int n,m,pre[MAX_N],cnt,p,q,enemy[MAX_N];
char s;
bool cnted[MAX_N];
vector<int> E[MAX_N];

// bool comp(edge x, edge y){
//     if (x.status == 'F' && y.status == 'E'){
//         return true;
//     } else if (x.status == 'E' && y.status == 'F'){
//         return true;
//     } else if (x.status == 'E' && y.status == 'E'){
//         return x.a < y.a;
//     }
//     return true;
// }

int find(int k){
    if (pre[k] == k) return k;
    return pre[k]=find(pre[k]);
}

void join(int x, int y){
    int fx = find(x); int fy = find(y);
    if (fx != fy){
        pre[fy] = fx;
    }
}

int main(){
    cin>>n>>m;
    for (int i = 1; i <= n; i++){
        pre[i] = i;
    }
    for (int i = 1; i <= m; i++){
        cin>>s>>p>>q;
        if (s == 'F') join(p,q);
        else {
            if (enemy[p] == 0) enemy[p] = find(q);
            else join(enemy[p],q);
            if (enemy[q] == 0) enemy[q] = find(p);
            else join(enemy[q],p);
        }
    }

    int x;
    for (int i = 1; i <= n; i++){
        x = find(i);
        if (!cnted[x]){
            cnt++;
            cnted[x] = true;
        }
    }
    cout<<cnt;
    return 0;
}