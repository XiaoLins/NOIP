//luogu U39793 走方格

#include <cstdio>
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

struct status{
    int x,y,step;
};

unsigned long long int cnt;
const int MAX_N = 105, MAX_M = 105, INF = 0x3f3f3f3f;
int n,m,shortest = INF;
status e1,e2;
queue<status> q;
bool reached[MAX_N][MAX_M];

void bfs(){
    e1.step = 0;
    e1.x = 0;
    e1.y = 0;
    reached[0][0] = true;
    q.push(e1);
    while(!q.empty()){
        e2 = q.front(); q.pop();
        reached[e2.x][e2.y] = true;
        if (e2.x > n || e2.y > m) continue;
        if (e2.x == n && e2.y == m){
            if(shortest == INF){
                shortest = e2.step;
            }
            cnt++;
            continue;
        }
        if (e2.step > shortest) continue;
        if (!reached[e2.x+1][e2.y]){
            e1.x = e2.x+1;
            e1.y = e2.y;
            e1.step = e2.step + 1;
            q.push(e1);
        }
        if (!reached[e2.x][e2.y+1]){
            e1.x = e2.x;
            e1.y = e2.y+1;
            e1.step = e2.step + 1;
            q.push(e1);
        }
    }
}

int main(){
    cin>>n>>m;
    bfs();
    cout<<cnt;
    return 0;
}