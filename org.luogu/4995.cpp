#include <cstdio>
#include <iostream>
#include <queue>

using namespace std;

const int MAX_N = 305;
unsigned long long n,h[MAX_N],ans,hnow,cnt;
priority_queue<unsigned long long, vector<unsigned long long>, greater<unsigned long long> > qsmall;
priority_queue<unsigned long long, vector<unsigned long long>, less<unsigned long long> > qbig;


int main(){
	cin>>n;
	for (int i = 1; i <= n; i++){
		cin>>h[i];
		qbig.push(h[i]);
		qsmall.push(h[i]);
	}
	for (int i = 1; i <= n; i++){
		if (i % 2 == 1){
			ans += (qbig.top()-hnow)*(qbig.top()-hnow);
			hnow = qbig.top();
			qbig.pop();
		} else{
			ans += (qsmall.top()-hnow)*(qsmall.top()-hnow);
			hnow = qsmall.top();
			qsmall.pop();
		}
	}
	cout<<ans;
	return 0;
}
