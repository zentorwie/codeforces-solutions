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
    int n, a, b, app[110] = {0}, x;
    scanf("%d%d%d", &n, &a, &b);
    for (int i = 0; i < a; i++) {
        scanf("%d", &x);
        app[x] = 1;
    }
    for (int i = 0; i < b; i++) {
        scanf("%d", &x);
        app[x] = 2;
    }
    for (int i = 1; i <= n; i++) {
        if (i == 1)
            printf("%d", app[i]);
        else
            printf(" %d", app[i]);
    }
    printf("\n");
    
    return 0;
}
