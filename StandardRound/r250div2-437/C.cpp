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


int n, m;

struct node {
    int id;
    ll e;
    bool operator<(const node&b) const {
        return e < b.e;
    }
};

struct cmp {
    bool operator () (const node& a, const node& b) const {
        return a.e > b.e;
    }
};
map<int, ll> mp;

ll eng[1010];
ll val[1010];
vector<int> eg[1010];
node v[1010];
void add(int a, int b)
{
    eng[a] += val[b];
    eng[b] += val[a];
    eg[a].push_back(b);
    eg[b].push_back(a);
}

int main()
{
    memset(eng, 0, sizeof(eng));
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) 
        scanf("%d", &val[i]);
    
    int a, b;
    for (int i = 1; i <= m; i++) {
        scanf("%d%d", &a, &b);
        add(a, b);
    }
    for (int i = 1; i <= n; i++) {
        node t;
        t.id = i;
        t.e = eng[i];
        printf("i = %d, e = %lld\n", i, t.e);
        v[i] = t;
    }
    sort(v+1, v+1+n);

    ll ans = 0;

    



    cout << ans <<endl;
    
    return 0;
}

