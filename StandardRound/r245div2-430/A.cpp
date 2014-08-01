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
int n, m, a[110], l[110], r[110], C[110];

bool ok = 1;
//int l[110], r[110];
int cnt[110];
int sum[110];
map<int, int> wh;

void dfs(int cur) 
{
    if (ok) return;
    
    if (cur == n) {
        ok = 1;
        for (int i = 0; i < n-1; i++) {
            if (C[i] == 1) printf("%d ", 1);
            else printf("0 ");
        }
        if (C[n-1] == 1) printf("%d\n", 1);
        else printf("0\n");
        return;
    }
    else {
        C[cur] = 1;
        sum[wh[cur]] += 1;
        cnt[wh[cur]]--;
        if (cnt[wh[cur]] == 0) {
            if (sum[wh[cur]] >= -1 && sum[wh[cur]] <= 1)
                dfs(cur+1);
        }
        C[cur] = -1;
        sum[wh[cur]] -= 2;
//        cnt[wh[cur]];
        if (cnt[wh[cur]] == 0) {
            if (sum[wh[cur]] >= -1 && sum[wh[cur]] <= 1)
                dfs(cur+1);
        }
        sum[wh[cur]]++;
        cnt[wh[cur]]++;
        return;
    }
}


int main()
{
    memset(C, 0, sizeof(C));
    memset(sum, 0, sizeof(sum));
    memset(cnt, 0, sizeof(cnt));
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    sort(a, a+n);
    int p = 0;
    for (int i = 0; i < m ; i++) {
        scanf("%d%d", &l[i], &r[i]);
        for (int j = 0; j <= n; j++) {
            if (a[j] >= l[i] && a[j] <= r[i]) {
                wh[j] = i;
                cnt[i]++;
            }
        }
    }
    dfs(0);
    
    return 0;
}
