#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

struct node{
	int x,y,z;
};

const int MAX_N = 50005;
int n;
node points[MAX_N];
double ans;

bool comp(node a, node b){
	return a.z < b.z;
}

double dist(node a, node b){
	return sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y)+(b.z-a.z)*(b.z-a.z));
}

int main(){
	cin>>n;
	for (int i = 1; i <= n; i++){
		cin>>points[i].x>>points[i].y>>points[i].z;
	}
	sort(points+1,points+1+n,comp);
	for (int i = 2; i <= n; i++){
		ans += dist(points[i-1],points[i]);
	}
	printf("%.3f",ans);
	return 0;
}
