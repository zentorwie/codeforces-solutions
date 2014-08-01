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
#include <functional>

using namespace std;

#define PQ priority_queue
#define VT vector
#define MP make_pair
#define FOR(i, b, e) for(int i=b;i<e;i++)
#define CaseRead int _TT; scanf("%d", &_TT); for (int kase = 1; kase <= _TT; kase++)

typedef long long ll;


double maxm = 0.0;

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int x, y;
   
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if ((i == 0 && j == 0) || (i == n && j == m)) continue;
            if (i == n-i && j == m-j) continue;
            double cur = sqrt(i*i + j*j);
            if (cur > maxm) {
                x = i;
                y = j;
                maxm = cur;
            }
        }
    }
    
    maxm *= 2;
    maxm += sqrt(n*n + m*m);

    double dig = sqrt(n*n + m*m);
    
    if (2*dig + m > maxm && n != 0 && m != 0) {
        printf("%d %d\n%d %d\n%d %d\n%d %d\n", 0, 0, n, m, n, 0, 0, m);
    }
    else if (2*dig + n > maxm && m != 0 && n != 0) {
        printf("%d %d\n%d %d\n%d %d\n%d %d\n", 0, 0, n, m, 0, m, n, 0);
    }
    else 
        printf("%d %d\n%d %d\n%d %d\n%d %d\n", x, y, 0, 0, n, m, n-x, m-y);
    
    
    return 0;
}
