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
const int MAX_N = 1005, MAX_M = 10005, INF = 0x3f3f3f3f;
int n,m,dist[MAX_N];
vector<edge> G[MAX_N];
priority_queue<pii, vector<pii>, greater<pii> > q;
//bool visited[MAX_N];

void djsk(int s){
    while(!q.empty()) q.pop();
    memset(dist,0x3f,sizeof(dist));
    dist[s] = 0; //visited[s] = true;
    q.push(make_pair(dist[s],s));
    while (!q.empty()){
        pii p = q.top(); q.pop();
        int dw = p.first, dp = p.second;
        if (dist[dp] < dw) continue;
        for (int i = 0; i < G[dp].size(); i++){
            edge e = G[dp][i];
            if (dist[e.to] > dist[dp] + e.d){
                dist[e.to] = dist[dp] + e.d;
                q.push(make_pair(dist[e.to],e.to));
            }
        }
    }
}

int main(){
    cin>>m;
    edge e;
    char c1,c2,dis;
    for (int i = 1; i <= m; i++){
        cin>>c1>>c2>>dis;
        e.d = dis;
        e.to = (int)c2;
        G[(int)c1].push_back(e);
        e.to = (int)c1;
        G[(int)c2].push_back(e);
    }
    djsk((int)'Z');
    for (char i = 'A'; i <= 'z'; i++){
        cout<<"dist("<<i<<") = "<<dist[i]<<endl;
    }
    char ans = 'A';
    for (char i = 'B'; i <= 'Y'; i++){
        if(dist[ans] > dist[i]){
            ans = i;
        }
    }
    cout<<ans<<" "<<dist[ans];
    return 0;
}