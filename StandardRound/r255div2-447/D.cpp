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

const ll maxn = 1010;
int n, m, k, p;

ll x[maxn][maxn];
ll sumr[maxn], sumc[maxn];
ll a[1000100], b[10001000];


int main()
{
    cin >> n >> m >> k >> p;
    memset(sumr, 0, sizeof(sumr));
    memset(sumc, 0, sizeof(sumc));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> x[i][j];
            sumr[i] += x[i][j];
            sumc[j] += x[i][j];
        }
    }
    
    priority_queue<ll> pq1;
    priority_queue<ll> pq2;
    
    for (int i = 0; i < n; i++) 
        pq1.push(sumr[i]);
    for (int i = 0; i < m; i++) 
        pq2.push(sumc[i]);

    a[0] = 0;
    for (int i = 1; i <= k; i++) {
        a[i] = pq1.top() + a[i-1];
        ll tmp = pq1.top() - m * p;
        pq1.pop();
        pq1.push(tmp);
    }
    b[0] = 0;
    for (int i = 1; i <= k; i++) {
        b[i] = pq2.top() + b[i-1];
        ll tmp = pq2.top() - n * p;
        pq2.pop();
        pq2.push(tmp);
    }

    ll ans = a[0] + b[k];
    for (int i = 1; i <= k; i++) {
        ans = max(ans, a[i] + b[k-i] - (ll)(k - i)*i*p);
    }

    cout << ans << endl;
    return 0;
}
