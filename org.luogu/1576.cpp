//luogu 1576
//Dijkstra + Priority_Queue

#include <cstdio>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

struct edge{
    int to;
    double d;
};

const int MAX_N = 2005, MAX_M = 100005, INF = 0x3f3f3f3f;
typedef pair<double,int> pii;//距离放前面 
priority_queue<pii, vector<pii>, greater<pii> > q;
vector<edge> G[MAX_M];
double dist[MAX_N];
int in1,in2,in3,s,t,n,m;

void add_edge(int from, int to, double d){
    edge x;
    x.to = to;
    x.d = 1.0-(d/100.0);
    G[from].push_back(x);
    x.to = from;
    G[to].push_back(x);
}

int main(){
    cin>>n>>m;
    for (int i = 1; i <= m; i++){
        cin>>in1>>in2>>in3;
        add_edge(in1,in2,in3);
    }
    for (int i = 1; i <= n; i++){
        dist[i] = INF;
    }
    cin>>s>>t;
    dist[s] = 1.0; q.push(make_pair(1.0,s));
    while(!q.empty()){
        pii y = q.top(); q.pop();
        double dw = y.first; int p = y.second;
        //if (dw != dist[p]) continue;
        for (int i = 0; i < G[p].size(); i++){
            edge e = G[p][i];
            if (dist[e.to] > dist[p]/e.d ){
                dist[e.to] = dist[p]/e.d;
                q.push(make_pair(dist[e.to],e.to));
            }
        }
    }
    printf("%.8f",dist[t]*100);
    return 0;
}