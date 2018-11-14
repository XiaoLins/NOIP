#include <cstdio>
#include <iostream>
using namespace std;

int n;
string num;

int main(){
    cin>>n;
    for (int i = 1; i <= n; i++){
        cin>>num;
        if ((num[num.size()-1]-'0') % 2 == 0) cout<<"even"<<endl;
        else cout<<"odd"<<endl;
    }
    return 0;
}