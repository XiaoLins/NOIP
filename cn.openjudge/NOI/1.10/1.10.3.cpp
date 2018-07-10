//OJ 1.10.3 成绩排序

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
	int n,index = 0;
    double grade[111], temp;
    char name[111][100];
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>name[i]>>grade[i];
    }
    for (int i = 0; i < n; i++){
        index = i;
        for (int j = i + 1; j < n; j++){
            if ((grade[j] > grade[index]) || (grade[j] == grade[index] && name[j] > name[index])){
                index = j;
            } 
        }
        if (index != i){
            swap(grade[i],grade[index]);
            swap(name[i],name[index]);
        }
    }
    for (int i = 0; i < n; i++){
        cout<<name[i]<<' '<<grade[i]<<endl;
    }
	return 0;
} 
