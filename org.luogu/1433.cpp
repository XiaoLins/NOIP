#include <cstdio>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

typedef pair<double,double> pii;
const int MAX_N = 20, MAX_M = 400;
bool visited[MAX_N];
double ans = 9999999999,dist[MAX_N][MAX_N],x,y;
int n;
pii points[MAX_N];

void dfs(int step, int now, double length){
    if (length > ans) return;
    if (step == n){
        ans = min(ans,length);
        return;
    }
    for (int i = 1; i <= n; i++){
        if (!visited[i]){
            visited[i] = true;
            dfs(step+1,i,length+dist[now][i]);
            visited[i] = false;
        }
    }
}

int main(){
    // freopen("1433.in","r",stdin);
    // freopen("1433.out","w",stdout);
    cin>>n;
    points[0] = make_pair(0,0);
    for (int i = 1; i <= n; i++){
        cin>>x>>y;
        points[i] = make_pair(x,y);
    }
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= n; j++){
            if (i == j) dist[i][j] = 0;
            dist[i][j] = sqrt((points[j].second-points[i].second)*(points[j].second-points[i].second)+(points[j].first-points[i].first)*(points[j].first-points[i].first));
        }
    }
    dfs(0,0,0.0);
    printf("%.2f",ans);
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}