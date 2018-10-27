//luogu 1828 香甜的黄油 Sweet Butter

#include <cstdio>
#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

struct edge{
    int to,d;
};

typedef pair<int,int> pii;
const int MAX_N = 505, MAX_P = 805, MAX_M = 1455, INF = 0x3f3f3f3f;
priority_queue<pii> q;
vector<edge> G[MAX_P];
int n,p,m,loc[MAX_N],minSum = INF,dist[MAX_P];

void djsk(int s){
    while(!q.empty()) q.pop();
    memset(dist,0x3f,sizeof(dist));
    dist[s] = 0;
    q.push(make_pair(0,s));
    while(!q.empty()){
        pii x = q.top(); q.pop();
        int dw = x.first, p = x.second;
        if (dw != dist[p]) continue;
        for (int i = 0; i < G[p].size(); i++){
            edge e = G[p][i];
            if (dist[e.to] > dist[p] + e.d){
                dist[e.to] = dist[p] + e.d;
                q.push(make_pair(dist[e.to],e.to));
            }
        }
    }
}

int main(){
    cin>>n>>p>>m;
    for (int i = 1; i <= n; i++){
        cin>>loc[i];
    }
    for (int i = 1; i <= m; i++){
        int in1,in2,in3;
        edge e;
        cin>>in1>>in2>>in3;
        e.d = in3;
        e.to = in1;
        G[in2].push_back(e);
        e.to = in2;
        G[in1].push_back(e);
    }
    for (int i = 1; i <= p; i++){
        djsk(i);
        int sum = 0;
        for (int j = 1; j <= n; j++){
            sum += dist[loc[j]];
        }
        minSum = min(minSum,sum);
    }
    cout<<minSum;
}