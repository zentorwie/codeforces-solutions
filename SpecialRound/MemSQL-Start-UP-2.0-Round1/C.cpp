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

ll f[1100];

ll fact(int n) 
{
    if (f[n] != -1) return f[n];
    if (n <= 1) return f[n] = 1;
    return f[n] = n*fact(n-1);
}

ll C(int base, int top) {
    return fact(base)/fact(base-top)/fact(top);
}


int main()
{
    memset(f, -1, sizeof(f));
    printf("%lld\n", C(199, 12));
    printf("%lld\n", C(5, 1));
    return 0;
}
