//贫富差距
//只解了一种特殊情况

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;


int main(){
    freopen("gap.in", "r", stdin);
    freopen("gap.out", "w", stdout);
    int T,ppl[11],diff[11],length[11]; //T是组数，ppl存储国民人口，diff储存差
    bool out = false;
    cin>>T;
    string acq[11][51]; //认识状态
    for (int i = 0; i < T; i++){
        cin>>ppl[i]>>diff[i];
        for (int j = 0; j < ppl[i]; j++){
            cin>>acq[i][j];
        }
    }
    for (int i = 0; i < T; i++){
        int overlap[51] = {};
        int count = 0, max = 0;
        for (int j = 0; j < ppl[i]; j++){ //j是具体某一行
            for (int k = 0; k < acq[i][j].size(); k++){ //k是具体某一个数字
                if (j == k)
                continue;
                if (acq[i][j][k] == 1){
                    overlap[k]++;
                }
            }
            for (int k = 0; k < acq[i][j].size(); k++){
                if (j == k)
                continue;
                if (!(overlap[k] == 2 || overlap[k] == 0)){
                    break;
                }
                if (k == acq[i][j].size() - 1){
                    cout<<-1;
                    out = true;
                    break;
                }
            }
            if (out = true){
                out = false;
                break;
            }
        }
    }
    return 0;
}