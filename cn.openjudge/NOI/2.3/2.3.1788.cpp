//OJ 2.3.1788 Pell数列

#include <cstdio>
#include <iostream>

using namespace std;

long long int n,a[1000],a1,a2,a3;

int main(){
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		if (a[i] == 1){
			cout << 1 << endl;
			continue;
		} else if (a[i] == 2){
			cout << 2 << endl;
			continue;
		}
		a1 = 1;
		a2 = 2;
		for (int j = 3; j <= a[i]; j++){
			a3 = (2 * a2 + a1) % 32767;
			a1 = a2;
			a2 = a3;
		}
		cout << a3%32767 << endl;
	}
	return 0;
}