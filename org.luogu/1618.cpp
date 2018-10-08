//luogu 1618 三连击（升级版）

#include <cstdio>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<int> v;
int a,b,c;
bool occupied[10] = {};

bool test(int num){
    while(num / 10 != 0){
        if (occupied[num%10] || num%10 == 0){
            return false;
        }
        occupied[num%10] = true;
        num /= 10;
    }
    if (occupied[num%10] || num%10 == 0){
        return false;
    }
    occupied[num%10] = true;
    return true;
}

int main(){
    cin>>a>>b>>c;
    for (int i = 1; i*c <= 987; i++){
        if(test(i) && test(i*b) && test(i*c)){
            v.push_back(i);
        }
        for (int j = 0 ; j <= 10; j++){
            occupied[j] = false;
        }
    }
    bool did = false;
    for (int i = 0 ; i < v.size(); i++){
        if (v[i]*a < 123){
            continue;
        }
        cout<<v[i]*a<<" "<<v[i]*b<<" "<<v[i]*c<<endl;
        did = true;
    }
    if (!did){
        cout<<"No!!!";
    }
    return 0;
}