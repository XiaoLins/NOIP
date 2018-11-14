#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <climits>

using namespace std;

const int MAX_N = 20, MAX_M = 1005;
int n, m, G[MAX_N][MAX_N], lev[MAX_N], vis[MAX_N], canReachCnt[MAX_N];
int ans = INT_MAX-5, tmp, tot, step, p, tar[MAX_N][MAX_N];

bool comp(int a, int b){
	return G[p][a] < G[p][b];
}

void dfs(int num, int node){
	for (int i = num; i <= step; i++){
		if (tot + tmp * lev[vis[i]] >= ans) return;
		for (int j = node; j <= canReachCnt[vis[i]]; j++){
			if (!lev[tar[vis[i]][j]]){
				step++;
				vis[step] = tar[vis[i]][j];
				tmp -= G[vis[step]][tar[vis[step]][1]];
				tot += G[vis[i]][vis[step]] * lev[vis[i]];
				lev[vis[step]] = lev[vis[i]] + 1;
				dfs(i, j+1);
				tot -= G[vis[i]][vis[step]] * lev[vis[i]];
				lev[vis[step]] = 0;
				tmp += G[vis[step]][tar[vis[step]][1]];
				step--;
			}
		}
		node = 1;
	}
	if (step == n){
		if (tot < ans) ans = tot;
		return;
	}
}

int main(){
	int from,to,v;
	scanf("%d%d",&n,&m);
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			G[i][j] = INT_MAX-5;
		}
	}
	for (int i = 1; i <= m; i++){
		scanf("%d%d%d",&from,&to,&v);
		if (v > G[from][to]) continue;
		if (G[from][to] == INT_MAX-5){
			tar[from][++canReachCnt[from]] = to;
			tar[to][++canReachCnt[to]] = from;
		}
		G[from][to] = G[to][from] = v;
	}
	for (int i = 1; i <= n; i++){
		p = i;
		sort(tar[i] + 1, tar[i] + 1 + canReachCnt[i], comp);
		tmp += G[i][tar[i][1]];
	}
	for (int i = 1; i <= n; i++){
		step = 1; tot = 0;
		vis[1] = i;
		tmp -= G[i][tar[i][1]];
		lev[i] = 1;
		dfs(1, 1);
		lev[i] = 0;
		tmp += G[i][tar[i][1]];
	}
	printf("%d",ans);
	return 0;
}
