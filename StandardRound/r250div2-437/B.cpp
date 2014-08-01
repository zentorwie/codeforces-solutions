#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <string>
#include <set>
#include <map>
#include <list>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cstdio>
#include <cmath>
typedef long long ll;
#define FOR(i, b, e) for(int i = b; i < e; i++)
#define FOR_N(i, b, e) for(int i = b; i <= e; i++)
#define REP(n) while(n--)
#define SCN(a) scanf("%d", &a)
#define MST(a) memset(a, 0, sizeof(a))
#define MST_1(a) memset(a, -1, sizeof(a))

#define VIT(a) vector<a>::iterator

using namespace std;

int low(int a) 
{
    return a&(-a);
}

struct node {
    int id;
    ll x;
    bool operator < (const node &a) const {
        return x < a.x;
    }
};



set<node> st;
int ans[100010];
int main()
{
    int s, n;
    memset(ans, 0, sizeof(ans));
    cin >> s >> n;
    int p = 0;

    int ok = 0;
    node t;

    for (int i = 1; i <= n; i++) {
 
    }
    

    if (ok) {
        printf("%d\n", p);
        printf("%d", ans[0]);
        FOR (i, 1, p)         printf(" %d", ans[i]);
        printf("\n");
    }
    else printf("-1\n");



    return 0;
}
