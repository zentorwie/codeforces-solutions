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
#define mod 1000000007
int n, x, k;
ll d[1000][2];
ll dp(int i, int j)
{               
    printf("dp(%d, %d)\n", i, j);
    if (d[i][j] != -1) return d[i][j];
    if (i == 0) {
        d[i][j] = 1;
    }
    else {
        d[i][j] = 0;
        if (j == 1) {
            if (i == x) {
                d[i][j] = 1;
            }
            else if (i > x) {
                for (int z = x; z <= k&&z <= i; z++) {
                    d[i][j] += dp(i-z, 0);
                    d[i][j] = d[i][j] % mod;
                }
                for (int z = 1; z <= k&& z <= i; z++) {
                    //     if (z == x) continue;
                    d[i][j] += dp(i-z, 1);
                    d[i][j] = d[i][j] % mod;
                }
            }
            else d[i][j] = 0;
        }
        else {
            d[i][j] = 0;

            for (int z = 1; z <= k && z <= i; z++) {
                if (z == x) continue;
                d[i][j] += dp(i-z, 0);
                d[i][j] = d[i][j] % mod;
            }
        }
    }
    printf("dp(%d, %d) = %lld\n", i, j,d[i][j]);
    return d[i][j];
}


int main()
{
    MST_1(d);
    d[0][0] = 1;
    cin >> n >> k >> x;    
    cout << dp(n, 1) << endl;
    for (int i = 1; i <= n; i++) {
        printf("%3lld: %3lld %3lld\n", i, d[i][1], d[i][0]);
    }
    return 0;
}
