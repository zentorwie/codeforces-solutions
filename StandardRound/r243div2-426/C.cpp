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

int a[210];


int main()
{
    int n, k, tmp;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    int maxm = -19999;
    int sum = 0;
    int l, r;
    while (k--) {
        maxm = sum = a[1];
        int flag = 1; // 1-right
        int len = 1;
        int ll=1, rr=1;
        l = ll;   r = rr;
        while (1) {
            printf("ll = %d, rr = %d\n", ll, rr);
            if (flag) {
                if (rr < n) {
                    rr++;
                    sum += a[rr];
                    sum -= a[ll];
                    ll++;
                } else {
                    len++;
                    if (len > n) break;
                    ll--;
                    sum += a[ll];
                    flag = 0;
                }
            } else {
                if (ll > 1) {
                    ll--;
                    sum += a[ll];
                    sum -= a[rr];
                    rr--;
                } else {
                    len++;
                    if (len > n) break;
                    rr++;
                    sum += a[rr];
                    flag = 1;
                }
            }
            printf("sum = %d\n", sum);

            if (sum > maxm) {
                maxm = sum;
                l = ll;
                r = rr;
            }
        }
        printf("maxm = %d, l = %d, r = %d\n", maxm, l, r);
        
        int cnt = 0;
        int min = 100000;
        for (int i = l; i <= r; i++) {
            if (a[i] < 0) cnt++;
            if (min < a[i]) min = a[i];
        }
        
        
    }
    
    return 0;
}
