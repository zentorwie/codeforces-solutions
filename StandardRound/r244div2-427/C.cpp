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
#define FOR(i, b, e) for(ll i = b; i < e; i++)
using namespace std;

#define mod 1000000007

ll ans=1;
ll c[100010];
ll sum=0;
ll vis[100010];
ll entry[100010];
ll cnt;
list<int> mp[100010];




ll mini = 1000000010;

void dfs(ll i) 
{
    vis[i] = 1;
    if (c[i] < mini) {
        mini = c[i];
        cnt = 1;
    }
    else if (c[i] == mini) {
        cnt++;
    }
    list<int>::iterator it = mp[i].begin();
    while (it != mp[i].end()) {
        if (!vis[*it]) dfs(*it);
        it++;
    }
}

void deal(ll v)
{
    vis[v] = 1;
    list<int>::iterator it = mp[v].begin();
    while (it != mp[v].end()) {
        entry[*it]--;
        if (entry[*it] == 0) deal(*it);
        it++;
    }
    sum += c[v];
}


int main()
{
    ll n, m, a, b;
    memset(vis, 0, sizeof(vis));
    memset(entry, 0, sizeof(entry));
    scanf("%I64d", &n);
    for (ll i = 1; i <= n; i++) {
        scanf("%I64d", &c[i]);
    }
    scanf("%I64d", &m);
    for (ll i = 0; i < m; i++) {
        scanf("%I64d%I64d", &a, &b);
        mp[a].push_back(b);
        entry[b]++;
    }
    
    for (ll i = 1; i <= n; i++) {
        if (!vis[i] && entry[i] == 0) {
            deal(i);
        }
    }

    for (ll i = 1; i <= n; i++) {
        if (!vis[i]) {
            mini = c[i];
            cnt = 0;
            dfs(i);
            ans = (ans * cnt) % mod;
            sum += mini;
        }
    }
    cout << sum << " " << ans << endl;
    return 0;
}
