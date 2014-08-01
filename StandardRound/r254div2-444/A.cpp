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
#include <functional>

using namespace std;

#define PQ priority_queue
#define VT vector
#define MP make_pair
#define FOR(i, b, e) for(int i=b;i<e;i++)
#define CaseRead int _TT; scanf("%d", &_TT); for (int kase = 1; kase <= _TT; kase++)

typedef long long ll;

struct Edge {
    int u, v, w;
    Edge(int u, int v, int w) :u(u), v(v), w(w) {}
} edge[251000];

int n, m;
int cnt=0;
vector<int> G[510];
int val[510];

void add(int a, int b, int w) {
    cnt++;
    edge[cnt] = Edge(a, b, w);
    G[a].push_back(cnt);
    cnt++;
    edge[cnt] = Edge(b, a, w);
    G[b].push_back(cnt);
}

double solve() {
    double ans = 0.0;
    ll v = 0;
    for (int i = 1; i <= n; i++) 
        v += val[i];
    ll e = 0;
    for (int i = 1; i <= 2*m; i++)
        e += edge[i].w;
    e /= 2;
    
    double cur = (double)v/e;
    
    bool del[510] = {0};
    for (int i = 1; i <= n; i++) {
        bool done = 1;
        int nv = 0;
        int ne = 0;
        for (int j = 1; j <= n; j++) {
            nv = v - val[j];
            ne = e;
            for (int k = 0; k < G[j].size(); k++) {
                if (!del[G[j][k].v]) ne -= G[j][k].w;
            }
            if (
        }
    }

}


int main()
{
    cnt = 0;
    memset(val, 0, sizeof(val));
    scanf("%d%d", &n, &m);
    
    for (int i = 1; i <= n; i++) 
        scanf("%d", &val[i]);

    int u, v, w;
    for (int i = 0; i < m; i++) {
        scanf("%d%d%d", &u, &v, &w);
        add(u, v, w);
    }

    double ans = solve();

    printf("%f\n", ans);
    return 0;
}
