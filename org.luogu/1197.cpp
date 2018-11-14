// #include <cstdio>
// #include <iostream>
// #include <algorithm>
// #include <cmath>
// #include <cstring>

// using namespace std;

// const int MAX_N = 400005, MAX_M = 200005;
// int n,m,x,y,pre[MAX_N],kCnt,a[MAX_M],b[MAX_M],k[MAX_N],ans[MAX_N];
// bool inSet[MAX_N];

// int find(int k){
//     if (pre[k] == k) return k;
//     return pre[k] = find(pre[k]);
// }

// void join(int x, int y){
//     int fx = find(x), fy = find(y);
//     if (fx != fy) pre[fx] = fy;
// }

// int main(){
//     scanf("%d%d",&n,&m);
//     memset(inSet,1,sizeof(inSet));
//     memset(ans,0,sizeof(ans));
//     for (int i = 0; i < n; i++) pre[i] = i; //点是0到n-1
//     for (int i = 1; i <= m; i++){
//         scanf("%d%d",&a[i],&b[i]);
//     }
//     scanf("%d",&kCnt);
//     for (int i = 1; i <= kCnt; i++){
//         scanf("%d",&k[i]);
//         inSet[k[i]] = false;
//     }
//     for (int i = 1; i <= m; i++){
//         if (inSet[a[i]] && inSet[b[i]]){
//             join(a[i],b[i]);
//         }
//     }
//     for (int i = 0; i < n; i++){
//         //cout<<"find("<<i<<") = "<<find(i)<<endl;
//         if (inSet[i]){
//             int fi = find(i);
//             if (fi == i) ans[kCnt+1]++;
//         }
//     }
//     for (int i = kCnt; i >= 1; i--){
//         inSet[k[i]] = true;
//         for (int j = 1; j <= m; j++){
//             if (inSet[a[j]] && inSet[b[j]]){
//                 join(a[j],b[j]);
//             }
//         }
//         int fj;
//         for (int j = 0; j < n; j++){
//             if (inSet[j]){
//                 fj = find(j);
//                 if (fj == j){
//                     ans[i]++;
//                 }
//             }
//         }
//     }
//     for (int i = 1; i <= kCnt+1; i++){
//         printf("%d\n",ans[i]);
//     }
//     return 0;
// }

#include <cstdio>
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

const int MAX_N = 400005, MAX_M = 200005;
vector<int> G[MAX_N];
int n,m,pre[MAX_N],k[MAX_N],kCnt,ans[MAX_N];
bool inSet[MAX_N];

int find(int k){
    if (pre[k] == k) return k;
    return pre[k] = find(pre[k]);
}

void join(int x, int y){
    int fx = find(x), fy = find(y);
    if (fx != fy) pre[fx] = fy;
}

int main(){
    cin>>n>>m;
    int p,q;
    memset(inSet,1,sizeof(inSet));
    for (int i = 0; i < n; i++) pre[i] = i;
    for (int i = 0; i < m; i++){
        cin>>p>>q;
        G[p].push_back(q);
        G[q].push_back(p);
    }
    cin>>kCnt;
    for (int i = 0 ; i < kCnt; i++){
        cin>>k[i];
        inSet[k[i]] = false;
    }
    // int tot = n;
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < G[i].size(); j++){
    //         if (find(i) != find(G[i][j])){
    //             join(i,G[i][j]);
    //             tot--;
    //         }
    //     }
    // }
    // ans[kCnt] = tot;
    // for (int i = 0; i < n; i++) pre[i] = i;
    int tot = n-kCnt;
    for (int i = 0; i < n; i++){
        if (inSet[i]){
            for (int j = 0; j < G[i].size(); j++){
                if (inSet[G[i][j]] && find(i) != find(G[i][j])){
                    join(i,G[i][j]);
                    tot--;
                }
            }        
        }
    }
    ans[kCnt] = tot;
    for (int i = kCnt-1; i >= 0; i--){
        int now = k[i];
        inSet[now] = true;
        tot++;
        for (int j = 0; j < G[now].size(); j++){
            if (inSet[G[now][j]] && find(now) != find(G[now][j])){
                join(now,G[now][j]);
                tot--;
            }
        }
        ans[i] = tot;
    }
    //cout<<ans[kCnt]<<endl;
    for (int i = 0; i <= kCnt; i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}
