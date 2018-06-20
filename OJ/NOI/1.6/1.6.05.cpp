//OJ 1.6.05 年龄与疾病

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	double per [4] = {0, 0, 0, 0};
    double n,age;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>age;
        if (age <= 18){
            per[0]++;
        } else if (age <= 35){
            per[1]++;
        } else if (age <= 60){
            per[2]++;
        } else{
            per[3]++;
        }
    }
    printf("%.2f", (per[0] * 100 / n));
    cout<<'%'<<endl;
    printf("%.2f", (per[1] * 100 / n));
    cout<<'%'<<endl;
    printf("%.2f", (per[2] * 100 / n));
    cout<<'%'<<endl;
    printf("%.2f", (per[3] * 100 / n));
    cout<<'%';  
	return 0;
} 
