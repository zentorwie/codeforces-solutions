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

#define mod 1000000007 

ll d[110][110][2];

int main()
{
    int n, m, f;
    memset(d, 0, sizeof(d));
    scanf("%d%d%d", &n, &m, &f);
    for (int k = 1; k <= m; k++) {
        if (k < f)
            d[1][k][0] = 1;
        else {
            d[1][k][1] = 1;
        }
//        printf("d[1][%d][0] = %d\n", k, d[1][k][0]);
//        printf("d[1][%d][1] = %d\n", k, d[1][k][1]);
    }
    
    for (int i = 2; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            for (int k = 1; k <= m && j-k>=0; k++) {
                if (k >= f) {
                    d[i][j][1] = (d[i][j][1] + (d[i-1][j-k][1] + d[i-1][j-k][0])) % mod;
                }
                else {
                    d[i][j][1] = (d[i][j][1] + d[i-1][j-k][1]) % mod;
                    d[i][j][0] = (d[i][j][0] + d[i-1][j-k][0]) % mod;
                }
            }

//            printf("d[%d][%d][0] = %lld\n", i, j, d[i][j][0]);
//            printf("d[%d][%d][1] = %lld\n", i, j, d[i][j][1]);
        }
    }

    ll ans = 0;
    for (int i = 1; i <= n; i++) {
//        ans = (ans + d[i][n][0]) % mod;
        ans = (ans + d[i][n][1]) % mod;
    }
    cout << ans << endl;

    return 0;
}
