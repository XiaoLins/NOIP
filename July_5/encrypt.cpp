//文本加密

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    freopen("encrypt.in", "r", stdin);
    freopen("encrypt.out", "w", stdout);
    string S,Result;
    int P[11],K,count = 0;
    cin>>S;
    Result.assign(S);
    for (int i = 0; i < S.size(); i++)
    cin>>P[i];
    cin>>K;
    for (int i = 0; i < K; i++){
        for (int j = 0; j < S.size(); j++){
            Result[P[j]] = S[j];
        }
        S.assign(Result);
    }
    cout<<Result;
    return 0;
}