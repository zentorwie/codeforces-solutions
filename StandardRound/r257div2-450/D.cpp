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

typedef long long ll;

#define maxn 200010

ll n, m, k;

struct Edge {
    ll from, to, dist;
    bool rail;
};

struct node {
    ll d, u;
    bool operator < (const node& b) const {
        return d > b.d;
    }
};

struct Dijkstra {
    ll n, m;
    vector<Edge> edges;
    vector<int> G[maxn];
    bool done[maxn];
    ll d[maxn];
    ll p[maxn];

    void init(ll n) {
        this->n = n;
        for (ll i = 0; i <  n; i++) G[i].clear();
        edges.clear();
    }

    void AddEdge(ll from, ll to, ll dist, bool rail) {
        edges.push_back((Edge){from, to, dist, rail});
        m = edges.size();
        G[from].push_back(m-1);
    }
#define INF 1e18
    void dijkstra(ll s) {
        PQ<node> q;
        for (ll i = 1; i <= n; i++) {
            d[i] = INF;
            p[i] = 1;
        }
        d[s] = 0;  p[s] = 0;
        memset(done, 0, sizeof(done));
        q.push((node){0, s});
        while (!q.empty()) {
            node x = q.top(); q.pop();
            ll u = x.u;
            if (done[u]) continue;
            done[u] = true;
            for (ll i = 0; i < G[u].size(); i++) {
                Edge& e = edges[G[u][i]];
                if (d[e.to] > d[u] + e.dist) {
                    d[e.to] = d[u] + e.dist;
                    p[e.to] = e.rail;
                    q.push((node){d[e.to], e.to});
                }
                else if (d[e.to] == d[u] + e.dist)
                    p[e.to] = min(p[e.to], (ll)e.rail);
            }
        }
    }
    ll getRail() {
        ll ans = 0;
        for (ll i = 2; i <= n; i++) {
            if (p[i] == 1) ans++;
        }
        return ans;
    }
};


int main()
{
    scanf("%I64d%I64d%I64d", &n, &m, &k);
    Dijkstra solver;
    solver.init(n);
    for (ll i = 0; i < m; i++) {
        ll a, b, w;
        scanf("%I64d%I64d%I64d", &a, &b, &w);
        solver.AddEdge(a, b, w, false);
        solver.AddEdge(b, a, w, false);
    }
    for (ll i = 0; i < k; i++) {
        ll a, w;
        scanf("%I64d%I64d", &a, &w);
        solver.AddEdge(1, a, w, 1);
        solver.AddEdge(a, 1, w, 1);
    }
    solver.dijkstra(1);
    printf("%I64d\n", k-solver.getRail());
    return 0;
}
