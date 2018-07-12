//luogu.org 1217 [USACO1.5]回文质数 Prime Palindromes

#include <cstdio>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int n;
vector<int> hui;

int main() {
    cin>>n;
    for (int i = 2; i <= 9; i++){
        hui.push_back(i);
    }
    for (int i = 1; i <= 9; i += 2){
        for (int j = 0; j <= 9; j++){
            hui.push_back(100*i+10*j+i);
        }
    }
    for (int i = 1; i <= 9; i += 2){
        for (int j = 0; j <= 9; j++){
            for (int k = 0; k <= 9; k++)
                hui.push_back(10000*k+1000*j+100*i+10*j+k);
        }
    }
    for (int i = 1; i <= 9; i += 2){
        for (int j = 0; j <= 9; j++){
            for (int k = 0; k <= 9; k++)
                for (int x = 0; x <= 9; x++)
                    hui.push_back(1000000*x+100000*k+10000*j+1000*i+100*j+10*k+x);
        }
    }
    for (int i = 0; i < hui.size(); i++){
        
    }
    return 0;
}