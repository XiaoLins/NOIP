//OJ 1.10.4 奖学金

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
	int n, grades[301],chin[301],math[301],eng[301],nums[301];
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>chin[i]>>math[i]>>eng[i];
        grades[i] = chin[i] + math[i] + eng[i];
        nums[i] = i + 1;
    }
    for (int i = n - 1; i > 0; i--){
        for (int j = 0; j < i; j++){
            if (grades[j] > grades[j+1] 
            || (grades[j] == grades[j+1] && chin[j] > chin[j+1]) 
            || (grades[j] == grades[j+1] && chin[j] == chin[j+1] && nums[j] < nums[j+1])){
                swap(grades[j],grades[j+1]);
                swap(nums[j],nums[j+1]);
            }   
        }
    }
    cout<<nums[n-1]<<" "<<grades[n-1]<<endl;
    cout<<nums[n-2]<<" "<<grades[n-2]<<endl;
    cout<<nums[n-3]<<" "<<grades[n-3]<<endl;
    cout<<nums[n-4]<<" "<<grades[n-4]<<endl;
    cout<<nums[n-5]<<" "<<grades[n-5];
	return 0;
} 
