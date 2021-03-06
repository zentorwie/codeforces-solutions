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
    int col[1010];
    int row[1010];

    int tab[1010][1010];
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &tab[i][j]);
        }
    }
    for (int i = 0; i < max(n,m); i++) {
        col[i] = i;
    }
    for (int i = 0; i < max(m,n); i++) {
        row[i] = i;
    }
    int x, y;
    char o[2];
    for (int i = 0; i < k; i++) {
        scanf("%s %d %d\n", o, &x, &y);
        x--;
        y--;
        if (o[0] == 'g')
            printf("%d\n", tab[col[x]][row[y]]);
        else if (o[0] == 'c') {
            int z = row[x];
            row[x] = row[y];
            row[y] = z;
        }
        else {
            int z = col[x];
            col[x] = col[y];
            col[y] = z;
        }
    }
    
    return 0;
}
