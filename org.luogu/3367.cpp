//luogu P3367 【模板】并查集

#include <cstdio>
#include <iostream>

using namespace std;

int pre[10005],n,m,zi,xi,yi; //pre[]用于记录前趋

int find(int k){ //找到最上级
    if(pre[k] == k) return k; //如果上级是自己，返回
    return pre[k]=find(pre[k]); //路径压缩，将pre[k]赋值为最上级
}

void join(int x, int y){ //合并两个集
    int dx = find(x); int dy = find(y); //找到各自的最上级
    if(dx != dy){ //如果最上级不一样
        pre[dx] = dy; //合并，赋值最上级
    }
}

int main(){
    cin>>n>>m;
    for (int i = 1; i <= n; i++){
        pre[i] = i;
    }
    for (int i = 1; i <= m; i++){
        cin>>zi>>xi>>yi;
        if (zi == 1){
            join(xi,yi);
        } else{
            if(find(xi) == find(yi)){
                cout<<'Y'<<endl;
            } else{
                cout<<'N'<<endl;
            }
        }
    }
    return 0;
}