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
    int sum[160000] = {0};
    int x[160000];
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &x[i]);
//        printf("x = %d\n", x[i]);
    }
    sum[0] = 0;
    for (int i = 1; i <= n; i++) {
        sum[i] = sum[i-1] + x[i];
    }
    
    int ans = 1;
    int maxm = sum[n];
//    for (int i = 0; i <= n; i++) printf("sum[%d] = %d\n", i, sum[i]);
    for (int i = 0; i+k <= n; i++) {
        if (sum[i+k] - sum[i] <= maxm) {
            maxm = sum[i+k] - sum[i];
            ans = i+1;
        }
    }
    printf("%d\n", ans);
    return 0;
}
