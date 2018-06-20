//OJ 1.10.7 合影效果

#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    string sex[41];
    int n;
    double height[41];
    cin>>n;
    for (int i = 0; i < n; i++)
    cin>>sex[i]>>height[i];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - 1; j++){
            if (sex[j].compare(sex[j+1]) == 0){
                if (sex[j] == "male" && height[j] > height[j+1]){
                    swap(sex[j],sex[j+1]);
                    swap(height[j],height[j+1]);
                } else if (sex[j] == "female" && height[j] < height[j+1]){
                    swap(sex[j],sex[j+1]);
                    swap(height[j],height[j+1]);
                }
            } else if (sex[j] == "female"){
                swap(sex[j],sex[j+1]);
                swap(height[j],height[j+1]);
            }
        }
    }
    printf("%.2f",height[0]);
    for (int i = 1; i < n; i++)
    printf(" %.2f",height[i]);
	return 0;
} 
