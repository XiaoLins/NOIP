//luogu.org 1553 数字反转（升级版）

#include <cstdio>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int n;
    string pwd;
    int temp;
    cin>>n>>pwd;
    for (int i = 0; i < pwd.size(); i++){
        temp = pwd[i] + n % 26;
        while(temp > (int)'z'){
            temp -= 26;
        }
        cout<<(char)temp;
    }
    return 0;
}