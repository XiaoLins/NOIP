#include <cstdio>
#include <iostream>
#include <queue>

using namespace std;

queue<string> fr,end;
bool same[105];
string s[105];

int n;

int main(){
	scanf("%d",&n);
	string status;
	for (int i = 1; i <= n; i++){
		cin>>s[i]>>status;
		if (status[0] == 'U') end.push(s[i]);
		else if (status[0] == 'D') fr.push(s[i]);
		else same[i] = true;
	}	
	for (int i = 1; i <= n; i++){
		if (same[i]) cout<<s[i]<<endl;
		else if (!fr.empty()){
			cout<<fr.front()<<endl;
			fr.pop();
		} else if (!end.empty()){
			cout<<end.front()<<endl;
			end.pop();
		}
	}
	return 0;
}
