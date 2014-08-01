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

struct candy {
    int h;
    int m;
    bool operator < (const candy& b) const {
        if (m == b.m) return h < b.h;
        return m > b.m;
    }
};

list<candy> c[2];
list<candy> bk[2];
int main()
{
    int n, x, t, h, m, bx;
    candy can;
    scanf("%d%d", &n, &x);
    bx = x;
    for (int i = 0; i < n; i++) {
        scanf("%d%d%d", &t, &h, &m);
        can.h = h;
        can.m = m;
        c[t].push_back(can);
    }
    
    c[0].sort();
    c[1].sort();
    bk[0] = c[0];
    bk[1] = c[1];

    int flag = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    int ans = 0;
    list<candy>::iterator it;
    
    while (1) {
        bool ok = 0;
        for (it = c[flag].begin(); it != c[flag].end(); it++) {
            if ((*it).h <= x) {
                ok = 1;
                x += (*it).m;
                c[flag].erase(it);
                cnt1++;
                break;
            }
        }
        if (!ok) break;
        flag = !flag;
    }
    flag = 1;
    c[0] = bk[0];
    c[1] = bk[1];
    x = bx;
    while (1) {
        bool ok = 0;
        for (it = c[flag].begin(); it != c[flag].end(); it++) {
            if ((*it).h <= x) {
                ok = 1;
                x += (*it).m;
                c[flag].erase(it);
                cnt2++;
                break;
            }
        }
        if (!ok) break;
        flag = !flag;
    }

    printf("%d\n", max(cnt1, cnt2));
    
    
    return 0;
}
