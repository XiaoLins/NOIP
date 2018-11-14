#include <cstdio>
#include <iostream>
#include <climits>

using namespace std;
const int INF = 0x3f3f3f3f;
long long ans,n,x;

int main(){
	scanf("%lld",&n);
	for (int i = 1; i <= n; i++){
		scanf("%lld",&x);
		if(x >= INT_MIN && x <= INT_MAX) {
			mn = min(x,mn);
			mx = max(x,mx);
		}
	}
	printf("%lld",mx-mn);
	return 0;
}
