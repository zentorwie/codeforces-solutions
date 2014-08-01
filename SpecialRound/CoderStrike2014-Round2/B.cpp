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
    int n, m, k, A[20010][20] = {0}, cnt[20010] = {0}, tmp[20] = {0};
    scanf("%d%d%d", &n, &m, &k);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%d", &A[i][j]);

    int x, y;
    for (int i = 0; i < k; i++) {
        scanf("%d%d", &x, &y);
        cnt[x]--;
        tmp[y]++;
    }
    
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (A[j][i]) cnt[j] += tmp[i];
        }
    }
    
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d", cnt[i]);
        }
        else printf(" %d", cnt[i]);
    }
    printf("\n");
    
    
    return 0;
}
