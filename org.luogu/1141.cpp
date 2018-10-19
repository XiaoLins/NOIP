//luogu P1141 01迷宫

#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int n,m,mat[1005][1005],startRow,startColumn,mx[100005] = {};
int stateNow;
char temp[1005];
int reached[1005][1005] = {};

void dfs(int row, int column, int now, int stateNow){
    if (row < 1 || row > n || column < 1 || column > n || reached[row][column] != -1 || mat[row][column] != stateNow) return;
    // if (!reached[row-1][column] && row-1 >= 1 && mat[row-1][column] == !stateNow){
        mx[now]++;
        reached[row][column] = now;
        dfs(row-1,column,now,!stateNow);
    // }
    // if (!reached[row+1][column] && row+1 <= n && mat[row+1][column] == !stateNow){
    //     mx[now]++;
    //     reached[row+1][column] = true;
        dfs(row+1,column,now,!stateNow);
    // }
    // if (!reached[row][column-1] && column-1 >= 1 && mat[row][column-1] == !stateNow){
    //     mx[now]++;
    //     reached[row][column-1] = true;
        dfs(row,column-1,now,!stateNow);
    // }
    // if (!reached[row][column+1] && column+1 <= n && mat[row][column+1] == !stateNow){
    //     mx[now]++;
    //     reached[row][column+1] = true;
        dfs(row,column+1,now,!stateNow);
    //}
}

int main(){
    scanf("%d%d",&n,&m);
    for(int i = 1; i <= n; i++){
        scanf("%s",temp);
        for (int j = 0; j < n; j++){
            if(temp[j] == '0'){
                mat[i][j+1] = 0;
            } else{
                mat[i][j+1] = 1;
            }
        }
    }
    memset(reached,-1,sizeof(reached));
    for (int i = 1; i <= m; i++){
        scanf("%d%d",&startRow,&startColumn);
        //reached[startRow][startColumn] = true;
        //mx[i]++;
        if (reached[startRow][startColumn] == -1) dfs(startRow,startColumn,i,mat[startRow][startColumn]);
        else mx[i] = mx[reached[startRow][startColumn]];
        printf("%d\n",mx[i]);
    }
    return 0;
}