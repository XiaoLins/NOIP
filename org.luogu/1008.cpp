//luogu.org 1008 三连击

#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    int a[15];
    bool ans;
    for (int i=123;i<=329;i++)
    {
        a[1]=i%10;
        a[2]=i%100/10;
        a[3]=i/100;
        a[4]=2*i%10;
        a[5]=2*i%100/10;
        a[6]=2*i/100;
        a[7]=3*i%10;
        a[8]=3*i%100/10;
        a[9]=3*i/100;
        sort(a+1,a+10);
        ans=true;
        for (int j=1;j<=9;j++) 
        if (a[j]!=j) 
        ans=false;
        if (ans) 
        cout<<i<<" "<<i*2<<" "<<i*3<<endl;
    }
    return 0;
}