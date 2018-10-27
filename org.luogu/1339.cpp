#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
#include <vector>

using namespace std;

struct edge{
    int to,d;
};

typedef pair<int,int> pii;
const int MAX_N = 2505, MAX_C = 6205, INF = 0x3f3f3f3f; //T为城镇总数，C为道路总数，
int n,c,s,t,dist[MAX_N];
bool visited[MAX_N];
vector<edge> G[MAX_N];
priority_queue<pii, vector<pii>, greater<pii> > q;

void djsk(int s){
    while(!q.empty()) q.pop();
    memset(dist,0x3f,sizeof(dist));
    memset(visited,0,sizeof(visited));
    visited[s] = true;
    dist[s] = 0;
    q.push(make_pair(0,s));
    while(!q.empty()){
        pii x = q.top(); q.pop();
        int cost = x.first; int point = x.second;
        if (cost != dist[point]) continue;
        for (int i = 0; i < G[point].size(); i++){
            edge e = G[point][i];
            if (dist[e.to] > dist[point] + e.d){
                dist[e.to] = dist[point] + e.d;
                q.push(make_pair(dist[e.to],e.to));
            }
        }
    }
}

int main(){
    cin>>n>>c>>s>>t;
    int inpFrom,inpTo,inpCost;
    edge e;
    for (int i = 1; i <= c; i++){
        cin>>inpFrom>>inpTo>>inpCost;
        e.d = inpCost;
        e.to = inpTo;
        G[inpFrom].push_back(e);
        e.to = inpFrom;
        G[inpTo].push_back(e);
    }
    djsk(s);
    cout<<dist[t];
    return 0;
}