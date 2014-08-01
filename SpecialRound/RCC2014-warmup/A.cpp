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
    int c, d, n, m, k, cnt=0, all=0, ans=0, r;
    cin >> c >> d >> n >> m >> k;
    all = n*m;
    cnt = n*m;
    cnt -= k;
    if (cnt <= 0) {
        printf("0\n");
    }
    else if (n*d >= c) {
        while (cnt > n) {
            cnt -= n;
            ans += c;
        }
        if (cnt > 0) {
            if (c > cnt*d) 
                ans += cnt*d;
            else
                ans += c;
        }
        printf("%d\n", ans);
    }
    else {
        printf("%d\n", cnt*d);
    }

    
    return 0;
}
