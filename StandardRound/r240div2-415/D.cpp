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
using namespace std;

typedef long long ll;
const ll mod = 1000000007;
ll d[2010][2010];
ll dd[2010][2010];

int main()
{
    ll n, k;
    memset(d, 0, sizeof(d));
    memset(dd, 0, sizeof(dd));
    cin >> n >> k;
    for (ll i = 1; i <= n; i++) {
        int p = 1;

        for (ll j = 1; j <= i; j++) {
            if (i % j == 0) {
                dd[i][0]++;
                dd[i][p++] = j;
            }
        }
    }

    for (ll i = 1; i <= n; i++) d[1][i] = 1;
    
    for (ll i = 2; i <= k; i++) {
        for (ll j = 1; j <= n; j++) {
            for (ll tt = 1; tt <= dd[j][0]; tt++) {
                d[i][j] = (d[i][j] + d[i-1][dd[j][tt]]) % mod;
            }
        }
    }
    ll ans = 0;
    for (ll i = 1; i <= n; i++) {
        ans = (ans + d[k][i]) % mod;
    }
    cout << ans << endl;
    
    
    return 0;
}
