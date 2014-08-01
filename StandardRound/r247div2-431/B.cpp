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
#define FOR(i, b, e) for(ll i = b; i < e; i++)
#define FOR_N(i, b, e) for(ll i = b; i <= e; i++)
#define REP(n) while(n--)
#define SCN(a) scanf("%d", &a)
#define MST(a) memset(a, 0, sizeof(a))
#define MST_1(a) memset(a, -1, sizeof(a))

#define VIT(a) vector<a>::iterator

using namespace std;
const ll N = 5;
ll G[10][10];

ll c[10];

ll deal() {
    ll ans = 0;
    for (ll i = 1; i <= 5; i++) {
        for (ll j = i+1; j <= 5; j+=2) {
            ans += G[c[j]][c[j-1]]+G[c[j-1]][c[j]];
        }
    }
    
    return ans;
}

int main()
{
    for (ll i = 1; i <= N; i++) {
        for (ll j = 1; j <= N; j++) {
            cin >> G[i][j];
        }
    }
    for (ll i = 1; i <= 5; i++) {
        c[i] = i;
    }
    ll ans = 0;
    do {
        ans = max(ans, deal());
    } while (next_permutation(c+1, c+1+N));
    cout << ans << endl;
    return 0;
}
