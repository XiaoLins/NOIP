// //luogu 4779
#include <cstdio>
#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

// struct edge{
//     int to,d;
//     edge(){}
//     edge(int _to,int _d){
//         to = _to;
//         d = _d;
//     }
// };

// int n,m,s;
// int t1,t2,t3;
// const int MAX_V = 1e5 + 5;
// const int INF = 2147483647;
// vector<edge> G[MAX_V]; //邻接表
// typedef pair<int,int> pii;
// int dist[MAX_V];
// priority_queue<pii> que;

// void add_edge(int u, int v, int d){
//     G[u].push_back(edge(v,d));
// } 

// void dijkstra(int s){
//     while(!que.empty()) que.pop();
//     for (int i = 1 ; i <= n; i++){
//         dist[i] = INF;
//     }
//     dist[s] = 0; que.push(make_pair(0,s));
//     while(!que.empty()){
//         pii p = que.top(); que.pop();
//         int d = -p.first, v = p.second;
//         if (dist[v] < d) continue;
//         for (int i = 0; i < G[v].size(); i++){
//             edge e = G[v][i];
//             int w = e.to, dw = d+e.d;
//             if (dist[e.to] > dw){
//                 que.push(pii(dw,w));
//                 dist[w] = dw;
//             }
//         }
//     } 
// }

// int main(){
//     cin>>n>>m>>s;
//     for (int i = 0; i < m; i++){
//         cin>>t1>>t2>>t3;
//         add_edge(t1,t2,t3);
//     }
//     dijkstra(s);
//     for (int i = 1; i <= n; i++){
//         cout<<dist[i]<<" ";
//     }
//     return 0;
// }

struct edge{
    int d,to;
};

typedef pair<int,int> pii;
const int INF = 2147483647;
const int MAXN = 100005;
priority_queue<pii, vector<pii>, greater<pii> > pq;

int n,m,s;
vector<edge> G[MAXN];

int dis[MAXN];

void djsk(int s){
    for (int i = 1; i <= n; i++){
        dis[i] = INF;
    }
    dis[s] = 0;
    pq.push(make_pair(0,s));
    while(!pq.empty()){
        pii u = pq.top(); pq.pop();
        int x = u.second, d = u.first;
        if (d != dis[x]) continue;
        for (int i = 0; i < G[x].size(); i++){
            edge e = G[x][i];
            if (dis[e.to] > dis[x] + e.d){
                dis[e.to] = dis[x] + e.d;
                pq.push(make_pair(dis[e.to],e.to));
            }
        }
    }
}

int main(){
    cin>>n>>m>>s;
    edge in;
    int in1,in2,in3;
    for (int i = 0; i < m; i++){
        cin>>in1>>in2>>in3;
        in.to = in2;
        in.d = in3;
        G[in1].push_back(in);
    }
    djsk(s);
    for (int i = 1; i <= n; i++){
        cout<<dis[i]<<" ";
    }
    return 0;
}