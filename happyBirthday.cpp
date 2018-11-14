#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;

string id;
int day,month;

int main(){
    cout<<"请输入游戏名（国际版）"<<endl;
    cin>>id;
    cout<<"请输入月"<<endl;
    cin>>month;
    cout<<"请输入日"<<endl;
    cin>>day;
    if (month == 11 && day == 1 && id == "_AutumnMoon"){
        cout<<"祝本子生日快乐~"<<endl<<"小林祝"<<endl;
    } else{
        cout<<"不知道是什么日子呢~不过想必是美好的一天"<<endl<<endl;
    }
    system("pause");
    return 0;
}