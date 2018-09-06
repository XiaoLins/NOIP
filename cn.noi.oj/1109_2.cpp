// oj.noi.cn 1109 维护序列 (链表解法)

#include <cstdio>
#include <algorithm>
#include <iostream>

using namespace std;

int m,n,a[2001],nxt[2001];

int getPos(int cnt){
    int pos = 0;
    for (int i = 1; i <= cnt; i++){
        pos = nxt[pos];
    }
    return pos;
}

void ins(int i, int val){
    a[++n] = val;
    int temp = getPos(i-1);
    nxt[n] = nxt[temp];
    nxt[temp] = n;
}

void del(int i){
    int temp = getPos(i-1);
    nxt[temp] = nxt[nxt[temp]];
}

int main(){
    cin>>n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        nxt[i-1] = i;
    }
    cin>>m;
    for (int i = 1; i <= m; i++){
        int type,pos,val;
        cin>>type>>pos;
        if (type == 1){
            cout << a[getPos(pos)] << endl;
        } else if (type == 2){
            cin>>val;
            ins(pos,val);
        } else if (type == 3){
            del(pos);
        }
    }
    return 0;
}