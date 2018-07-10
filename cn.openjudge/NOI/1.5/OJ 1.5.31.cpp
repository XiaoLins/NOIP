//OJ 1.5.31 ????? 

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	bool light [5001] = {false};
	for (int i = 1; i <= m; i++){
		for (int j = i; j <= n; j += i){
			if (light[j] = true){
				light[j] = false;
			} else if (light[j] = false){
				light[j] = true;
			}
			cout<<light[j]<<endl;
		}
	}
	bool first = true;
	for (int k = 1; k <= n ; k++){
		if (light[k] = false){
			if (first){
				cout<<k;
				first = false;
			} else{
				cout<<','<<k;
			}
		}
	}
	return 0;
}


