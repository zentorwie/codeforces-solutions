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
    int n, now=0, ans=0, a;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a < 0) {
            if (now > 0) now--;
            else {
                ans++;
            }
        }
        else 
            now += a;
    }
    printf("%d\n", ans);
    return 0;
}
