#include <iostream>
#include <queue>

using namespace std;

struct Op{
    int floor;
    int cnt;
};

bool reached[1005] = {};
int num[1005];
int n,a,b,diff;

queue<Op> q;

int main(){
    Op e1,e2;
    cin>>n>>a>>b;
    for (int i = 1; i <= n; i++){
        cin>>num[i];
    }
    e1.floor = a;
    e1.cnt = 0;
    reached[a] = true;
    q.push(e1);
    while(!q.empty()){
        e2 = q.front();
        q.pop();
        if (e2.floor == b){
            break;
        }
        diff = e2.floor + num[e2.floor]; //判断能否向上操作
        if (diff <= n && !reached[diff]){
            e1.floor = diff;
            e1.cnt = e2.cnt + 1;
            q.push(e1);
            reached[diff] = true;
        }
        diff = e2.floor - num[e2.floor]; //判断能否向下操作
        if (diff >= 1 && !reached[diff]){
            e1.floor = diff;
            e1.cnt = e2.cnt + 1;
            q.push(e1);
            reached[diff] = true;
        }
    }
    if (e2.floor == b){
        cout<<e2.cnt;
    } else{
        cout<<-1;
    }
    return 0;
}