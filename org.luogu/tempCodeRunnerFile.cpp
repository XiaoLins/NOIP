//luogu.org P3955 图书管理员

#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    int n,q,lens[1001],min=20000000;
    string reqIDs[1001],ids[1001];
    cin>>n>>q;
    for (int i = 0; i < n; i++)
    cin>>ids[i];
    for (int i = 0; i < q; i++)
    cin>>lens[i]>>reqIDs[i];
    for (int i = 0; i < q; i++){
        for (int j = 0; j < n; j++){
            if (reqIDs[i] == ids[j].substr(ids[j].size() - lens[i] - 1 , lens[i] + 1)){
                if (int(ids) < min){
                    min = int(ids);
                }
            }
        }
        if (min == 20000000){
            cout<<-1<<endl;
        } else{
            cout<<min<<endl;
        }
    }
    return 0;
}