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
typedef long long ll;


int main()
{
    int p, n;
    int tab[400] = {0};
    scanf("%d%d", &p, &n);
    int ans = -1;
    int x;
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (ans == -1) {
            if (tab[x%p] == 1) 
                ans = i+1;
        }
        tab[x%p] = 1;
            
    }
    printf("%d\n", ans);

    return 0;
}
