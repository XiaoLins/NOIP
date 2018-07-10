//OJ 1.10.5 分数线划定

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
	int n,m,k[5001],s[5001],line,count = 0; //total, expected, #s and grades
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    cin>>k[i]>>s[i];
    for (int i = n - 1; i > 0; i--)
    for (int j = 0; j < i; j++){
        if(s[j] < s[j+1] || (s[j] == s[j+1] && k[j] > k[j+1])){
            swap(s[j],s[j+1]);
            swap(k[j],k[j+1]);
        }
    }
    line = m * 1.5;
    while (s[count] >= s[line-1]){
        count++;
    }
    cout<<s[line-1]<<" "<<count<<endl<<k[0]<<" "<<s[0];
    for (int i = 1; i < count; i++){
        cout<<endl<<k[i]<<" "<<s[i];
    }
	return 0;
} 
