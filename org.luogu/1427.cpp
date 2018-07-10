//luogu.org 1055 ISBN号码

#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    string a;
    int code;
    const char b = '0';
    cin>>a;
    code = ((a[0]-b) * 1 + (a[2]-b) * 2 + (a[3]-b) * 3 + (a[4]-b) * 4 + (a[6]-b) * 5 +(a[7]-b) * 6 +(a[8]-b) * 7 +(a[9]-b) * 8 +(a[10]-b) * 9) % 11;
    if (code == 10){
        if (a[12] == 'X'){
            cout<<"Right";
            return 0;
        } else{
            cout<<a[0]<<a[1]<<a[2]<<a[3]<<a[4]<<a[5]<<a[6]<<a[7]<<a[8]<<a[9]<<a[10]<<a[11]<<"X";
            return 0;   
        }
    }
    if (code == a[12] - b){
        cout<<"Right";
    } else{
        cout<<a[0]<<a[1]<<a[2]<<a[3]<<a[4]<<a[5]<<a[6]<<a[7]<<a[8]<<a[9]<<a[10]<<a[11]<<code;
    }
    return 0;
}