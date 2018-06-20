//OJ 1.6.08 石头剪刀布
#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int N, NA, NB, A[100], B[100], count = 0, indexA = 0, indexB = 0;
    cin>>N>>NA>>NB;
    for (int i = 0; i < NA; i++){
        cin>>A[i];
    }
    for (int i = 0; i < NB; i++){
        cin>>B[i];
    }
    for (int i = 0; i < N; i++){
        if (indexA == NA){
            indexA = 0;
        }
        if (indexB == NB){
            indexB = 0;
        }
        if (A[indexA] == 0 && B[indexB] == 2){
            count++;
        }
        if (A[indexA] == 0 && B[indexB] == 5){
            count--;
        }
        if (A[indexA] == 2 && B[indexB] == 0){
            count--;
        }
        if (A[indexA] == 2 && B[indexB] == 5){
            count++;
        }
        if (A[indexA] == 5 && B[indexB] == 0){
            count++;
        }
        if (A[indexA] == 5 && B[indexB] == 2){
            count--;
        }
        indexA++;
        indexB++;
    }
    if (count > 0){
        cout<<"A";
    } else if (count == 0){
        cout<<"draw";
    } else{
        cout<<"B";
    }
	return 0;
} 
