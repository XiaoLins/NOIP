//luogu.org 1598 垂直柱状图

#include <cstdio>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string a[4],b;
    int cnt[1000] = {},max;
    for (int i = 0; i < 4; i++)
    getline(cin,a[i]);
    b = a[0] + a[1] + a[2] + a[3];
    for (int i = 0; i < b.size(); i++)
    cnt[b[i]]++;
    max = 'A';
    for (int i = 'B'; i <= 'Z'; i++){
        if(cnt[i] > cnt[max]){
            max = i;
        }
    }
    for (int i = cnt[max]; i > 0; i--){
        for (int j = 'A'; j < 'Z'; j++){
            if(cnt[j] == i){
                cnt[j]--;
                cout<<"* ";
            } else{
                cout<<"  ";
            }
        }
        if (cnt['Z'] == i){
            cnt['Z']--;
            cout<<"*"<<endl;
        } else{
            cout<<" "<<endl;
        }
    }
    for (int i = 'A'; i < 'Z'; i++){
        cout<<(char)i<<" ";
    }
    cout<<'Z';
    return 0;
}