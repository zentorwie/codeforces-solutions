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

int n, m, C[110][110];

int deal(int n)
{
    for (int i = 1; i <= n/2; i++) {
        for (int j = 1; j <= m; j++) {
            if (C[n+1-i][j] != C[i][j]) {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%d", &C[i][j]);
    int ans = n;
    while (1) {
        if (ans % 2 == 1) break;
        if (deal(ans)) ans /= 2;
        else break;
    }
    printf("%d\n", ans);
    return 0;
}
