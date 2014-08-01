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

int main()
{
    int n, t, c, a[200010];
    scanf("%d%d%d", &n, &t, &c);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int ans = 0;
    for (int i = 0, cnt = 0; i < n; i++) {
        if (a[i] > t) cnt = 0;
        else 
            cnt++;

        if (cnt >= c)
            ans++;

    }
    
    printf("%d\n", ans);
    
    return 0;
}
