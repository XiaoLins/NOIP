//OJ 1.9.10 找最大数序列

#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(){
	int n, max = -999999;
    bool first = true, locate [50] = {};
    char nums[50][300];
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>nums[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < strlen(nums[i]); j++){
            if (nums[i][j] != ','){
                if (nums[i][j] > max){
                    max = nums[i][j];
                }
                                    cout<<i<<' '<<j<<' '<<nums[i][j]<<' '<<max<<endl;

            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < strlen(nums[i]); j++){
            if (nums[i][j] != ','){
                if (nums[i][j] == max){
                    locate[i] = true;
                }
            }
        }
    }
    cout<<max<<endl;
    for (int i = 0; i < 32; i++){
        if (locate[i]){
            if (first){
                cout<<i+1;
                first = false;
            } else{
                cout<<','<<i+1;
            }
        }
    }
	return 0;
} 
