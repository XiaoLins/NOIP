//luogu.org 1217 [USACO1.5]回文质数 Prime Palindromes

#include <cstdio>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

long a,b;
long primeList[10000];
bool prime = true;
long hui[100000];
long cnt = 0,pCnt = 1;

int main() {
    freopen("1217.in","r",stdin);
    freopen("1217.out","w",stdout);
    cin>>a>>b;
    for (int i = 5; i <= 9; i++){
        hui[cnt] = i;
        cnt++;
    }
    hui[cnt] = 11;
    cnt++;
    for (int i = 1; i <= 9; i += 2){
        for (int j = 0; j <= 9; j++){
            hui[cnt]=100*i+10*j+i;
            cnt++;
        }
    }
    for (int i = 1; i <= 9; i += 2){
        for (int j = 0; j <= 9; j++){
            for (int k = 0; k <= 9; k++){
                hui[cnt]=10000*i+1000*j+100*k+10*j+i;
                cnt++;
            }
        }
    }
    for (int i = 1; i <= 9; i += 2){
        for (int j = 0; j <= 9; j++){
            for (int k = 0; k <= 9; k++){
                for (int x = 0; x <= 9; x++){
                    hui[cnt]=1000000*i+100000*j+10000*k+1000*x+100*k+10*j+i;
                    cnt++;
                }
            }
        }
    }
	bool num [b+5]; 
	for(int i=2; i<=b; i++)
	{
		num[i] = true;
	}
	for(int i=2; i<=sqrt(b); i++)
	{
		if(num[i])
			for(int j=2; j<=b/i; j++)
				num[i*j] = false;
	}
    primeList[0] = 2;
	for(int i=3; i<=b; i++)
	{
		if(num[i]){
            primeList[pCnt] = i;
            pCnt++;
        }
	}
    for (int i = 0; i < pCnt; i++){
        cout << primeList[pCnt] <<", "<<endl;
    }
    for (int i = 0; i < cnt; i++){
        int temp = hui[i];
        if (temp < a){
            continue;
        } else if (temp > b){
            //cout<<temp;
            break;
        }
        for (int j = 0; j < pCnt; j++){
            if (temp == primeList[j]){
                break;
            }
            if (temp % primeList[j] == 0){
                prime = false;
                break;
            }
        }
        if (prime){
            //printf("%d\n",temp);
        }
        prime = true;
    }
    
    return 0;
}