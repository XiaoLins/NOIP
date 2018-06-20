//OJ 1.9.04 谁拿了最多奖学金

#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int n;
    cin>>n;
    int finalGrade[n],classGrade[n],papers[n],scho[n];
    long long int sum = 0;
    char stu[n],west[n];
    char names[n][25],temp;
    for (int i = 0; i < n; i++){
        cin>>names[i]>>finalGrade[i]>>classGrade[i]>>stu[i]>>west[i]>>papers[i];
        scho[i] = 0;
        if (finalGrade[i] > 80 && papers[i] >= 1){
            scho[i] += 8000;
        }
        if (finalGrade[i] > 85 && classGrade[i] > 80){
            scho[i] += 4000;
        }
        if (finalGrade[i] > 90){
            scho[i] += 2000;
        }
        if (finalGrade[i] > 85 && west[i] == 'Y'){
            scho[i] += 1000;
        }
        if (finalGrade[i] > 80 && stu[i] == 'Y'){
            scho[i] += 850;
        }
        sum += scho[i];
    }
    int max = 0;
    for (int i = 1; i < n; i++){
        if (scho[max] < scho[i]){
            max = i;
        }
    }
    cout<<names[max]<<endl<<scho[max]<<endl<<sum;
	return 0;
} 
