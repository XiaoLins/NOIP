//luogu 1217 [USACO1.5]回文质数 Prime Palindromes

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
int a,b;
vector<int> nums;

bool isPrime(int num){
    if(num <= 1){
        return false;
    } else if (num == 2){
        return true;
    } else{
        for (int i = 3; i <= sqrt(num); i+=2){
            if(num % i == 0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    cin >> a >>b;
    //长度为1
    nums.push_back(5);
    nums.push_back(7);
    //长度为2
    if (b >= 10){
        for (int i = 1; i <= 9; i+=2){
            nums.push_back(11*i);
        }
    }
    //长度为3
    if (b >= 100){
        for (int d1 = 1; d1 <= 9; d1 += 2){
            for (int d2 = 0; d2 <= 9; d2++){
                nums.push_back(100*d1+10*d2+d1);
            }
        }
    }
    //长度为4
    if (b >= 1000){
        for (int d1 = 1; d1 <= 9; d1+=2){
            for (int d2 = 0; d2 <= 9; d2++){
                nums.push_back(1001*d1+11*d2);
            }
        }
    }
    //长度为5
    if (b >= 10000){
        for (int d1 = 1; d1 <= 9; d1 += 2){
            for (int d2 = 0; d2 <= 9; d2++){
                for (int d3 = 0 ; d3 <= 9; d3++){
                    nums.push_back(10000*d1+1000*d2+100*d3+10*d2+d1);
                }
            }
        }
    }
    //长度为6
    if (b >= 100000){
        for (int d1 = 1; d1 <= 9; d1+=2){
            for (int d2 = 0; d2 <= 9; d2++){
                for (int d3 = 0; d3 <= 9; d3++){
                    nums.push_back(100001*d1+10010*d2+1100*d3);
                }
            }
        }
    }
    //长度为7
    if (b >= 1000000){
        for (int d1 = 1; d1 <= 9; d1 += 2){
            for (int d2 = 0; d2 <= 9; d2++){
                for (int d3 = 0 ; d3 <= 9; d3++){
                    for (int d4 = 0; d4 <= 9; d4++){
                        nums.push_back(1000000*d1+100000*d2+10000*d3+1000*d4+100*d3+10*d2+d1);
                    }
                }
            }
        }
    }
    //长度为8
    if (b >= 10000000){
        for (int d1 = 1; d1 <= 9; d1+=2){
            for (int d2 = 0; d2 <= 9; d2++){
                for (int d3 = 0; d3 <= 9; d3++){
                    for (int d4 = 0; d4 <= 9; d4++){
                        nums.push_back(10000001*d1+1000010*d2+100100*d3+11000*d4);
                    }
                }
            }
        }
    }
    for (int i = 0; i < nums.size(); i++){
        if (nums[i] < a){
            continue;
        } else if (nums[i] > b){
            break;
        }
        if (isPrime(nums[i])){
            cout<<nums[i]<<endl;
        }
    }
    return 0;
}