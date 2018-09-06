//OJ 2.3.1760 斐波那契数列(2)

#include <iostream>
#include <cstdio>

using namespace std;

long long int n,a[1000],f1 = 1,f2 = 1, f3;

int main(){
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		if (a[i] == 0){
			
		}
		if (a[i] <= 2){
			cout << 1 << endl;
			continue;
		}
		f1 = 1;
		f2 = 1;
		for (int j = 3; j <= a[i]; j++){
			f3 = (f1 + f2)%1000;
			f1 = f2;
			f2 = f3;
		}
		cout << f3%1000 << endl;
	}
	return 0;
}