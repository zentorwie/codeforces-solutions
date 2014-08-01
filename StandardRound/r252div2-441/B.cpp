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
    int n, v;
    int t[3010] = {0};
    scanf("%d%d", &n, &v);
    int x, y, mini=3001, maxi=0;
    for (int i = 1; i <= n; i++) {
        scanf("%d%d", &x, &y);
        t[x] += y;
        maxi = max(maxi, x);
        mini = min(mini, x);
    }

    int ans = 0;
    for (int i = 1; i <= maxi+2; i++) {
        int cur = v;
        
        if (cur < t[i-1]) {
            ans += cur;
            t[i-1] -= cur;
            cur = 0;
        } else {
            cur -= t[i-1];
            ans += t[i-1];
            t[i-1] = 0;
        }

        if (cur > 0) {
            if (cur < t[i]) {
                ans += cur;
                t[i] -= cur;
                cur = 0;
            } else {
                cur -= t[i];
                ans += t[i];
                t[i] = 0;
            }
        }
//        printf("cur = %d\n", cur);
    }
    printf("%d\n", ans);
    return 0;
}
