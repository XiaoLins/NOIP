//OJ 1.10.8 病人排队

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    int n, age[101], b[101];
    string id[101];
    cin>>n;
    for (int i = 0; i < n; i++){
        b[i] = i;
        cin>>id[i]>>age[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - 1; j++){
            if (age[j] < 60 && age[j+1] >= 60){
                swap(id[j],id[j+1]);
                swap(age[j],age[j+1]);
                swap(b[j],b[j+1]);
            } else if (age[j] >= 60 && age[j+1] >= 60 && age[j] < age[j+1]) {
                swap(id[j],id[j+1]);
                swap(age[j],age[j+1]);
                swap(b[j],b[j+1]);
            } else if (age[j] >= 60 && age[j+1] >= 60 && age[j] == age[j+1] && b[j] > b[j+1]){
                swap(id[j],id[j+1]);
                swap(age[j],age[j+1]);
                swap(b[j],b[j+1]);
            } else if (age[j] < 60 && age[j+1] < 60 && b[j] > b[j+1]){
                swap(id[j],id[j+1]);
                swap(age[j],age[j+1]);
                swap(b[j],b[j+1]);
            }
        }
    }
    cout<<id[0];
    for (int i = 1; i < n; i++)
    cout<<endl<<id[i];
	return 0;
} 
