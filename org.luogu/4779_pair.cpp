#include<iostream>
#include<cstdio>
#include<algorithm>
#include<utility>
#include<vector>
#include<queue>
#define MAXN 20000
#define INF 2147483647
using namespace std;
typedef pair<int,int> pii;
priority_queue<pii, vector<pii>, greater<pii> > pq;
struct edge
{
    int to;
    int cost;
};
vector<edge> G[MAXN];//g[i]--i to g[i].to cost cost
int n, m, s;
int dis[MAXN];
void dijk(int s)
{
    for(int i = 1; i <= n; i++)
        dis[i] = INF;
    dis[s] = 0;
    pq.push(make_pair(0,s));
   // cout<<dis[s]<<endl;
    while(!pq.empty())
    {
        pii u = pq.top();
        pq.pop();
        int x = u.second; // bian hao
        //cout<<x<<endl;
        for(int i = 0; i < G[x].size(); i++)
        {
            edge e = G[x][i];
            if(dis[e.to] > dis[x] + e.cost)
            {
                dis[e.to] = dis[x] + e.cost;
                pq.push(make_pair(dis[e.to], e.to));
               // cout<<dis[e.to]<<endl;
            }
        }
    }
}
int main()
{
    cin >> n >> m >> s;
    int from, to, cost;
    edge in;
    for(int i = 0; i < m; i++)
    {
        scanf("%d%d%d",&from ,&to ,&cost);
        in.to = to; in.cost = cost;
        G[from].push_back(in);
    }
   // cout<<endl;
    dijk(s);
    for(int i = 1; i <= n; i++)
        printf("%d ", dis[i]);
    return 0;
}

