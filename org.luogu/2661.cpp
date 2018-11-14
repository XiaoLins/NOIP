#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <climits>

using namespace std;

const int MAX_N = 200005, INF = INT_MAX;
int n,to[MAX_N],edgeCnt[MAX_N],mn=INF;
bool visited[MAX_N],finished[MAX_N];

void dfs(int now,int step){
	if (finished[now]) return;
	if (visited[now]) mn = min(mn,step-edgeCnt[now]);
	else {
		visited[now] = true;
		edgeCnt[now] = step;
		dfs(to[now],step+1);
		finished[now] = true;
	}
}

int main(){
	scanf("%d",&n);
	for (int i = 1; i <= n; i++){
		scanf("%d",&to[i]);
	}
	for (int i = 1; i <= n; i++){
		dfs(i,0);
	}
	printf("%d\n",mn);
	return 0;
}
