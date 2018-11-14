#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;


struct task{
	int begin,length;
};
const int MAX_N = 10005, MAX_K = 10005;
int n,k,f[MAX_N],now=1,sum[MAX_N];
task t[MAX_K];



bool comp(task a, task b){
	return a.begin>b.begin;
}

int main(){
	scanf("%d%d",&n,&k);
	for (int i = 1; i <= k; i++){
		scanf("%d%d",&t[i].begin,&t[i].length);
		sum[t[i].begin]++;
	}
	sort(t+1,t+1+k,comp);
	for (int i = n; i >= 1; i--){
		if (sum[i] == 0) f[i] = f[i+1] +1;
		else for (int j = 1; j <= sum[i]; j++){
			if (f[i+t[now].length] > f[i]) f[i]=f[i + t[now].length];
			now++;
		}
	}
	printf("%d",f[1]);
	return 0;
}
