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

typedef long long LL;

priority_queue<int>R;
vector<int> A;
int main()
{
    LL n, m, a[110], id[110], vis[110]={0};
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int x;
    for (int i = 1; i <= m; i++) {
        cin >> x;
        vis[x] = 1;

    }

    for (int i = 1; i <= n; i++) {
        if (vis[i]) A.push_back(a[i]);
        else R.push(a[i]);
    }

    sort(A.begin(), A.end());
    int p = 0; 
    
    sort(a, a+n);
    
    
    LL ans = 0;
    LL maxm = 0;
    m -= 1;
    for (int i = 1; i <= n; i++) {
        if (!R.empty()) {
            ans += R.top();
            R.pop();
        }
        else {
            if (ans > A[p]) {
                if (A[m] >= ans) {
                    ans += A[m--];
                }
                else {
                    ans *= 2;
                    p++;
                }
            }
            else {
                ans += A[m--];
            }
        }
    }
    cout << ans << endl;
    
    return 0;
}
