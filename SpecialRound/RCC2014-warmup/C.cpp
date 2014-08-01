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
    int n, k;
    cin >> n >> k;
    if (k >= n || n*k > n*(n-1)/2)
        printf("-1\n");
    else {
        printf("%d\n", n*k);
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= k; j++) {
                printf("%d %d\n", i, (i-1+j)%n+1);
            }
        }
    }
    return 0;
}
