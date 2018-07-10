//OJ 1.9.02 输出最高分数的学生姓名

#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int n,grades[120],max = 0;
    char students[120][30];
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>grades[i]>>students[i];
    }
    for (int i = 0; i < n; i++){
        if (grades[max] < grades[i]){
            max = i;
        }
    }
    cout<<students[max];
	return 0;
} 
