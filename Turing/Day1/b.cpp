#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    int N,grades[101],level[6] = {}, count = 0;
    double total = 0, avg = 0, need = 0, diff = 0, now = 0; 
    cin>>N;
    for (int i = 0; i < N; i++){
        cin>>grades[i];
        total += grades[i];
    }
    avg = total / (double) N;
    if (avg >= 4.5){
        cout<<0;
        return 0;
    } else{
        need = N * 4.5;
    }
    diff = need - total;
    for (int i = 0; i < N; i++){
        level[grades[i]]++;
    }
    while (now < diff){
        if (level[2] != 0){
            now += 3;
            level[2]--;
            count++;
        } else if (level[3] != 0){
            now += 2;
            level[3]--;
            count++;
        } else if (level[4] != 0){
            now += 1;
            level[4]--;
            count++;
        }
    }
    cout<<count;
    return 0;
}