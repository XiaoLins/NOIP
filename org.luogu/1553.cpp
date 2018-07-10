//luogu.org 1553 数字反转（升级版）

#include <cstdio>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string num;
    string result = "";
    int type,index;
    getline(cin,num);
    if(num.find(".") != string::npos){
        type = 1;
    } else if (num.find("/") != string::npos){
        type = 2;
    } else if (num[num.size() - 1] == '%'){
        type = 3;
    } else{
        type = 0;
    }
    
    if (type == 0){
        for (int i = num.size() - 1; i >= 0; i--){
            result += num[i];
        }
        while (result.find("0") == 0){
            result.replace(0,1,"");
        }
        if(result == ""){
            result += '0';
        }
        cout<<result;
    } else if (type == 1){
        index = num.find(".");
        for (int i = index - 1; i >= 0; i--){
            result += num[i];
        }
        while (result.find("0") == 0 && result[1] != '.'){
            result.replace(0,1,"");
        }
        if(result == ""){
            result += '0';
        }
        result += '.';
        for (int i = num.size() - 1; i > index; i--){
            result += num[i];
        }
        while (result.rfind("0") == result.size() - 1 && result[result.size() - 2] != '.'){
            result.replace(result.size() - 1,1,"");
        }
        cout<<result;
    } else if (type == 2){
        index = num.find("/");
        for (int i = index - 1; i >= 0; i--){
            result += num[i];
        }
        while (result.find("0") == 0 && result[1] != '/'){
            result.replace(0,1,"");
        }
        if(result == ""){
            result += '0';
        }
        result += '/';
        string partb;
        for (int i = num.size() - 1; i > index; i--){
            partb += num[i];
        }
        while (partb.find("0") == 0){
            partb.replace(0,1,"");
        }
        result += partb;
        cout<<result;
    } else if (type == 3){
        index = num.size() - 1;
        for (int i = index - 1; i >= 0; i--){
            result += num[i];
        }
        while (result.find("0") == 0 && result[1] != '%'){
            result.replace(0,1,"");
        }
        if(result == ""){
            result += '0';
        }
        result += '%';
        cout<<result;
    }
    return 0;
}