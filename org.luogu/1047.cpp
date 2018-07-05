//luogu.org 1047 校门外的树

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int L,M,count = 0;
    cin>>L>>M;
    bool trees [10001] = {};
    int zoneS [M];
    int zoneE [M];
    for (int i = 0; i < M; i++){
        cin>>zoneS[i];
        cin>>zoneE[i];
        for (int j = zoneS[i]; j <= zoneE[i]; j++){
            trees[j] = true;
        }
    }
    for (int i = 0; i <= L; i++){
        if (!trees[i]){
            count++;
        }
    }
    cout<<count;
	return 0;
} 
