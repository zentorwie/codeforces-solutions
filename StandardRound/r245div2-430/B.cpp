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

int main()
{
    int n, k, x, b[110];
    scanf("%d%d%d", &n, &k, &x);
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    int ans = 0;
    int ball = 0;
    for (int i = 0; i < n; i++) {
//        printf("i = %d\n", i);

        int cnt = 1;
//        int cl = x;
        int j=i, k=i+1;
        int ok = 1;
        ball = 0;
        cnt = 1;
        int cl = x;
        while (ok) {

            for (; j >= 0; j--) {
                if (b[j] != cl) break;
                cnt++;
            }
            for (; k < n; k++) {
                if (b[k] != cl) break;
                cnt++;
            }
//            printf("cnt = %d\n", cnt);
            if (cnt >= 3) ball += cnt;
            else { ok = 0; }
            cl = b[j];
            cnt = 0;
        }
        if (ball > ans) ans = ball;
    }
    if (ans > 0) ans--;
    printf("%d\n", ans);
    return 0;
}
