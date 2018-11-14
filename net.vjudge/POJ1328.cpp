//POJ 1328
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>

using namespace std;

//typedef pair<int,int> point;
typedef pair<double,double> pii;
const int MAX_N = 1005, INF = 0x3f3f3f3f;
int n,d,a,b,caseCnt;
pii itv[MAX_N];

bool comp(pii a, pii b){
    return a.second < b.second;
}

pii calcItv(pii p){
    if(p.second > d || d < 0 || p.second < 0) return make_pair(2,1);
    double temp = sqrt(d*d - p.second*p.second);
    return make_pair(p.first - temp, p.first + temp);
}

int main(){
    while (scanf("%d%d",&n,&d) != EOF){
        if (n == 0 && d == 0) break;
        caseCnt++;
        for (int i = 1; i <= n; i++){
            scanf("%d%d",&a,&b);
            itv[i] = calcItv(make_pair(a,b));
        }
        int last = -INF, cnt = 0;
        sort(itv+1,itv+1+n,comp);
        for (int i = 1; i <= n; i++){
            a = itv[i].first; b = itv[i].second;
            if (a > b){
                cnt = -1;
                break;
            }
            if (last < a){
                cnt++;
                last = b;
            }
        }
        printf("Case %d: %d\n",caseCnt,cnt);
    }
    return 0;
}