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
#include <functional>

using namespace std;

#define PQ priority_queue
#define VT vector
#define MP make_pair

typedef long long ll;

int dx[] = {-1, -1, 1, 1};
int dy[] = {-1, 1, -1, 1};

int main()
{
    ll n, k, d1, d2;

    int T;
    cin >> T;
    while (T--) {
        cin >> n >> k >> d1 >> d2;
        ll x;
        ll left = n - k;
        bool ok = 0;
        for (int i = 0; i < 4; i++) {
            if (k + dx[i]*d1 + dy[i]*d2 >= 0 && (k + dx[i]*d1 + dy[i]*d2)%3==0) {
                x = (k+dx[i]*d1+dy[i]*d2) / 3;
                ll a = x-dx[i]*d1;
                ll b = x-dy[i]*d2;

                if (a < 0) continue;
                if (b < 0) continue;
                ll maxi = max(a, max(b, x));
                ll diff = 3*maxi-a-b-x;
                if (diff > left) continue;
                if ((left-diff)%3==0) {
                    ok = 1;
                    break;
                }
            }
        }
        if (ok) cout << "yes" << endl;
        else    cout << "no"  << endl;
    
    }
    return 0;
}
