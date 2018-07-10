//luogu.org 1308 统计单词数

#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string a,b,first;
    int cnt = 0, v = 0;
    getline(cin,a);
    getline(cin,b);
    for (int i=0;i<a.length();++i){
        a[i]=tolower(a[i]);
    }
    for (int i=0;i<b.length();++i){
        b[i]=tolower(b[i]);
    }
    a = " " + a + " ";
    b = " " + b + " ";
    if (b.find(a) == string::npos){
        cout<<-1;
        return 0;
    } else{
        int alpha = b.find(a);
        int beta = b.find(a);
        int cnt = 0;
        while (beta != string::npos){
            cnt++;
            beta = b.find(a,beta+1);
        }
        cout<<cnt<<" "<<alpha;
    }
    

    return 0;
}