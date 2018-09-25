//https://www.luogu.org/problemnew/show/T45869
//T45869 三去矩阵

#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct point{
    int x,y;
};

int n,q,mx = 1,cnt;
point cen;
char mat[10000][10000];

int main(){
    cin>>n>>q;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
        	cin>>mat[i][j];
		}
    }
    for (int i = 1; i <= q; i++){
        cin>>cen.x>>cen.y;
        cnt = 1;
        while (mat[cen.x-cnt][cen.y] == mat[cen.x+cnt][cen.y] && cen.x-cnt >= 1 && cen.x+cnt <= n){
            cnt++;
            mx = max(mx,cnt*2-1);
        }
        cnt = 1;
        while (mat[cen.x][cen.y-cnt] == mat[cen.x][cen.y+cnt] && cen.y-cnt >= 1 && cen.y+cnt <= n){
            cnt++;
            mx = max(mx,cnt*2-1);
        }
        cout<<mx<<endl;
        mx = 1;
    }
    return 0;
}
