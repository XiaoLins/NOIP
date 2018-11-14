#include <cstdio>
#include <iostream>
#include <algorithm>
#include <climits>
#include <cstring>

using namespace std;

const int MAX_N = 1000005, MAX_M = 1000005;
int d[MAX_N],s[MAX_N],t[MAX_N],need[MAX_N],rest[MAX_N],itv[MAX_N],n,m;

bool isok(int x){
	memset(itv,0,sizeof(itv));
	for (int i = 1; i <= x; i++){
		itv[s[i]] += d[i];
		itv[t[i]+1] -= d[i];
	}
	for (int i = 1; i <= n; i++){
		need[i] = need[i-1] + itv[i];
		if (need[i] > rest[i]) return false;
	}
	return true;
}

int main(){
	scanf("%d%d",&n,&m);
	for (int i = 1; i <= n; i++) scanf("%d",&rest[i]);
	for (int i = 1; i <= m; i++) scanf("%d%d%d",&d[i],&s[i],&t[i]);
	int begin = 1, end = m;
	if (isok(end)){
		printf("%d",0);
		return 0;
	} else{
		printf("%d\n",-1);
	}
	while (begin < end){
		int mid = (begin+end)/2;
		if (isok(mid)) begin = mid+1;
		else end = mid;
	}
	printf("%d",begin);
	return 0;
}
