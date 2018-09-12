#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

struct student{
    string name;
    int chinese,math;
    int total;
}; //定义一个struct的类型，类型名叫：student
student a[110]; //定义一个数组a，每个元素是student类型
int n;
int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin>>a[i].name>>a[i].chinese>>a[i].math;
        a[i].total = a[i].chinese + a[i].math;
    }
    for (int i = n -1; i > 0; i--){
        for (int j = 0; j < i; j++){
            if (a[j].total < a[j+1].total){
                swap(a[j],a[j+1]);
            }
        }
    }
    for (int i = 0; i < n; i++){
        cout<<a[i].name<<" "<<a[i].chinese<<" "<<a[i].math<<" "<<a[i].total<<endl;
    }
    return 0;
}
