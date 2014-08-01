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

int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll cnt = 0;
    ll l = 1;
    ll r = (ll)n*m+1;

    while (l <= r) {
        ll mid = (l+r)>>1;
        cnt = 0;
        for (int i = 1; i <= n; i++) cnt += min(mid/i, m);
        
        if (cnt < k) l = mid+1;
        else {
            cnt = 0;
            for (int i = 1; i <= n; i++) cnt += min((mid-1)/i, m);
            if (cnt < k) {
                cout << mid << endl;
                break;
            }
            r = mid;
        }
    }
    cout << ((l+r)>>1) << endl;
    
    return 0;
}
