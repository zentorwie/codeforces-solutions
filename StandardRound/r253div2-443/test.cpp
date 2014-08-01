#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<ctime>
#include<algorithm>
#include<list>
#include<queue>
#include<stack>
#include<vector>
#include<set>
#include<map>
#include<string>
#define REP(it,end) for (int it = 1; it <= (end); it++)
#define FOR(it,begin,end) for (int it = (begin); it <= (end); it++)
#define ROF(it,begin,end) for (int it = (begin); it >= (end); it--)
using namespace std;

double pa[101];
double dp[101];

bool cmp(double a,double b)
{
    return  a>b;
}

int main()
{
    int n,i,j,k;
    double us,nus,ans=0.0;
    memset(dp,0,sizeof(dp));
    scanf("%d",&n);
    for(i=0;i<n;i++)
        cin >>pa[i];
    sort(pa,pa+n,cmp);
    for(i=2;pa[0]<(1.0/i);i++);
    for(j=0;j<i-1&&j<n;j++)
    {
        us=pa[j];
        for(k=0;k<i-1&&k<n;k++)
            if(j==k)continue;
            else us*=(1-pa[k]);
        ans+=us;
    }
    printf("%.10f\n",ans);
    return 0;
}
