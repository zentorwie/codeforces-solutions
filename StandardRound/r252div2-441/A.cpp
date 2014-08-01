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


int main()
{
    int ans[51] = {0}, p=0;
    int n, v; 
    scanf("%d%d", &n, &v);
    int k, x;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &k);
        int ok = 0;
        for (int j = 0; j < k; j++) {
            scanf("%d", &x);
            if (x < v) {
                ok = 1;
            }
        }
        if (ok) ans[p++] = i;
    }
    printf("%d\n", p);
    if (p > 0) {
        printf("%d", ans[0]);
        for (int i = 1; i < p; i++) {
            printf(" %d", ans[i]);
        }
    }
    printf("\n");
    return 0;
}
