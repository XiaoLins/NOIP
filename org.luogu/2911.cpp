#include <cstdio>
#include <iostream>

using namespace std;

int c1,c2,c3,cnt[100];

int main(){
    cin>>c1>>c2>>c3;
    for (int i = 1; i <= c1; i++){
        for (int j = 1; j <= c2; j++){
            for (int k = 1; k <= c3; k++){
                cnt[i+j+k]++;
            }
        }
    }
    int mx = 0;
    for (int i = 1; i <= 100; i++){
        if (cnt[i] > cnt[mx]) mx = i;
    }
    cout<<mx;
    return 0;
}