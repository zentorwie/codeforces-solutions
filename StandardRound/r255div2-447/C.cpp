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

int main()
{
    int n;
    int x[100010];
    int a;
    int seg[100010];
    int l[100010], r[100010];
    int len[100010];
    int p = 0;
    int ans = 2;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        x[i] = a;
    }
    if (n == 1) {
        printf("1\n");
        return 0;
    }
    else if (n == 2) {
        printf("2\n");
        return 0;
    }
    p = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            l[p] = 0;
            len[p] = 1;
            r[p] = 0;
        }
        else {
            if (x[i] > x[i-1]) {
                r[p]++;
                len[p]++;
            }
            else {
                p++;
                l[p] = r[p] = i;
                len[p] = 1;
            }
        }
    }
    p++;
    for (int i = 1; i < p-1; i++) {
        if (len[i] == 1) {
            if (x[l[i+1]] - x[r[i-1]] > 1) {
                ans = max(ans, len[i-1] + len[i] + len[i+1]);
            }
            else {
                ans = max(ans, len[i-1] + len[i]);
                ans = max(ans, len[i+1] + len[i]);
            }
        }
        else {
            if (len[i-1] == 1) {
                ans = max(ans, len[i] + 1);
            }
            else {
                if (x[l[i]] - x[r[i-1]-1] > 1) {
                    ans = max(ans, len[i-1] + len[i]);
                }
                if (x[l[i]+1] - x[r[i-1]] > 1) {
                    ans = max(ans, len[i-1] + len[i]);
                }
            }
        }
    }
    int i = p-1;
    if (len[i] == 1) {
        ans = max(ans, len[i-1] + len[i]);
    } 
    else {
        if (len[i-1] == 1) {
            ans = max(ans, len[i] + 1);
        }
        else {
            if (x[l[i]] - x[r[i-1]-1] > 1) {
                ans = max(ans, len[i-1] + len[i]);
            }
            if (x[l[i]+1] - x[r[i-1]] > 1) {
                ans = max(ans, len[i-1] + len[i]);
            }
        }
    }

    if (p > 1) {
        for (int i = 0; i < p; i++) {
            ans = max(ans, len[i]+1);
//        printf("i = %d, l = %d, r = %d, len = %d\n", i, l[i], r[i], len[i]);
        }
    }
    else {
        ans = n;
    }

    printf("%d\n", ans);
    
    return 0;
}
