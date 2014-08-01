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
    int p[100010] = {0};
    memset(p, -1, sizeof(p));
    int n, x, k;
    scanf("%d", &n);
    
    int ok = 1;
    
    while (n--) {
        scanf("%d%d", &x, &k);
        if (x >= p[k]) {
            if (x-1 > p[k]) {
                ok = 0;
                break;
            }
            else
                p[k] = max(x, p[k]);
        }
        
    }

    if (ok) {
        printf("YES\n");
    }
    else 
        printf("NO\n");
    return 0;
}
