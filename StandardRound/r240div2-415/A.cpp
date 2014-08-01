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
    int n, m, l[1000] = {0}, t;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> t;
        for (int j = t; j <= n; j++) {
            if (l[j] == 0) l[j] = t;
        }
    }
    for (int i = 1; i < n; i++) {
        printf("%d ", l[i]);
    }
    printf("%d\n", l[n]);
    return 0;
}
