//OJ 1.5.18 鸡尾酒疗法

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int n;
	double per,temp,t,s;
	t = 0;
	s = 0;
	per = 0;
	temp = 0;
	n = 0;
	cin>>n>>t>>s;
	per = s/t;
	for (int i = 1; i < n; i++){
		cin>>t>>s;
		temp = s/t;
		if (temp - per > 0.05){
			cout<<"better"<<endl;
		} else if (per - temp > 0.05){
			cout<<"worse"<<endl;
		} else{
			cout<<"same"<<endl;
		}
	}
	return 0;
} 
