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

typedef long long ll;


int main()
{
    int a[100010];
    int b[100010];
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    
    sort(a+1, a+1+n);
    int l = 0, r = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] != b[i]) {
            r = i;
        }
    }

    for (int i = n; i >= 1; i--) {
        if (a[i] != b[i]) {
            l = i;
        }
    }
    bool ok = 1;
//    printf("%d %d\n", l, r);
    for (int i = l, j = r; i <= r; i++, j--) {
//        printf("a=%d, b=%d\n", a[i], b[j]);
        if (a[i] != b[j]) {
            ok = 0;
            break;
        }
    }
    
    if (l == 0 && r == 0) l = r = 1;
    if (ok) {
        printf("yes\n%d %d\n", l, r);
    }
    else printf("no\n");
    return 0;
}
