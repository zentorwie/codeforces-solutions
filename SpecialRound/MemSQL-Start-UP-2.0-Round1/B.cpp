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


int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    

    double ans1 = sqrt(n*n + m*m)*2 + m;
    double ans2 = sqrt(n*n + m*m)*2 + n;

    double ans3 = 2*sqrt((n-1)*(n-1) + (m-1)*(m-1)) + sqrt(n*n + m*m);
    
    if (n == 0) {
        printf("%d %d\n%d %d\n%d %d\n%d %d\n", 0, 1, 0, m, 0, 0, 0, m-1);
        return 0;
    }
    
    if (m == 0) {
        printf("%d %d\n%d %d\n%d %d\n%d %d\n", 1, 0, n, 0, 0, 0, n-1, 0);
        return 0;
    }


    if (ans1 >= ans2 && ans1 >= ans3) {
//        puts("A");
        printf("%d %d\n%d %d\n%d %d\n%d %d\n", 0, 0, n, m, n, 0, 0, m);
        return 0;
    }
    else if (ans2 >= ans1 && ans2 >= ans3) {
//        puts("B");
        printf("%d %d\n%d %d\n%d %d\n%d %d\n", 0, 0, n, m, 0, m, n, 0);
        return 0;
    }
    else {
        printf("%d %d\n%d %d\n%d %d\n%d %d\n", 1, 1, n, m, 0, 0, n-1, m-1);
        return 0;
    }
    
    
    return 0;
}
