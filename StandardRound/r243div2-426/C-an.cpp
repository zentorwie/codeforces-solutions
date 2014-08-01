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
    int n, K, a[210];
    cin >> n >> K;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int maxm = -19999999;
    
    while (K--) {
        int x, y;
        printf("(%d, %d)\n", x, y);
        maxm = -19999999;
        int lm = -19999900;
        int rm = -19999999;
        for (int j = 1; j <= n; j++) {
            int sum = 0;
            for (int k = j - 1; k >= 1; k--) {
                sum += a[k];
                if (sum > lm) lm = sum;
            }
            sum = 0;
            for (int k = j + 1; k <= n; k++) {
                sum += a[k];
                if (sum > rm) rm = sum;
            }
            if (lm<0)lm=0;
            if (rm<0)rm=0;
            sum = lm + a[j] + rm;
            printf("sum = %d\n", sum);
            if (sum > maxm)
                maxm = sum;
        }
        printf("maxm = %d\n", maxm);

        int deal = 0;
        for (int i = 1; i <= n; i++) {
            if (a[i] < 0) continue;
            for (int j = 1; j <= n; j++) {
                if (a[j] > 0) continue;
                if (i == j) continue;
                int lm = -19999900;
                int rm = -19999999;
                int t = a[i];
                a[i] = a[j];
                int sum = 0;
                for (int k = j - 1; k >= 1; k--) {
                    sum += a[k];
                    if (sum > lm) lm = sum;
                }
                sum = 0;
                for (int k = j + 1; k <= n; k++) {
                    sum += a[k];
                    if (sum > rm) rm = sum;
                }
                if (lm<0)lm=0;
                if (rm<0)rm=0;
                sum = lm + t + rm;
                if (sum > maxm) {
                    deal = 1;
                    x = i;
                    y = j;
                    maxm = sum;
                }
                a[i] = t;
            }
        }
        if (deal) {
            int t = a[x];
            a[x] = a[y];
            a[y] = t;
        } 

    }
    cout << maxm << endl;
    return 0;
}
