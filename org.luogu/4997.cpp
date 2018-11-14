//luogu 11月月赛第四题 P4997 不围棋

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int MAX_N = 605;
const char BLACK = 'X', WHITE = 'O', EMPTY = '.';
int pre[MAX_N*MAX_N],n;
char board[MAX_N][MAX_N];

int find(int k){
	if (pre[k] == k) return k;
	return pre[k] = find(pre[k]);
}

void join(int x, int y){
	int fx = find(x), fy = find(y);
	if (fx != fy) pre[fx] = fy;
}

int main(){
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		scanf("%s",&board[i]);
	}
	for (int i = 0; i < n*n; i++) pre[i] = i;
	
}
