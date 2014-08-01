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
using namespace std;

int a[10010], b[10010];
int n1=0, n2=0;
int x[10010];
bool vis[10010];
list<int> ch[10010];
int st[10010];
int go[10010];

void dfs(int flag, int v)
{
    vis[v] = 1;
    x[v] = flag;
    list<int>::iterator it;
    for (it = ch[v].begin(); it != ch[v].end(); it++) {
        if (!vis[*it]) dfs(!flag, *it);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int aa, bb;
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &aa, &bb);
        ch[aa].push_back(bb);
        ch[bb].push_back(aa);
    }
    for (int i = 1; i <= n; i++) {
        scanf("%d", &st[i]);
    }
    for (int i = 1; i <= n; i++) {
        scanf("%d", &go[i]);
    }
    
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) dfs(1, 1);
    }

    for (int i = 1; i <= n; i++) {
        printf("%2d", x[i]);
    }
    return 0;
}
