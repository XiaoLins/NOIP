#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;

string id;
int day,month;

int main(){
    cout<<"��������Ϸ�������ʰ棩"<<endl;
    cin>>id;
    cout<<"��������"<<endl;
    cin>>month;
    cout<<"��������"<<endl;
    cin>>day;
    if (month == 11 && day == 1 && id == "_AutumnMoon"){
        cout<<"ף�������տ���~"<<endl<<"С��ף"<<endl;
    } else{
        cout<<"��֪����ʲô������~������������õ�һ��"<<endl<<endl;
    }
    system("pause");
    return 0;
}