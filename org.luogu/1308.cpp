//luogu.org 1308 统计单词数

#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

void ToLowerString(string &str)
{
    transform(str.begin(), str.end(), str.begin(), (int (*)(int))tolower);
}

int main() {
    string a,s[1000001] = {},first;
    int cnt = 0, v = 0;
    bool appear = false;
    cin>>a;
    ToLowerString(a);
    while (cin>>s[cnt]){
        cnt++;
    }
    // for (int i = 0; i < cnt; i++){
    //     ToLowerString(s[i]);
    //     if(a == s[i]){
    //         if (!appear){
    //         first = i;
    //         for (int j = i; j >= 0; j--){
    //             first += s[j].length();
    //         }
    //         }
    //         v++;
    //     }
    // }
    // cout<<v<<" "<<first;
    return 0;
}