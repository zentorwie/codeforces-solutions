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
    int n;
    int a[110];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    sort(a, a+n);
    int t = a[0];
    a[0] = a[n-1];
    a[n-1] = t;
    printf("%d", a[0]);
    for (int i = 1; i < n; i++) printf(" %d", a[i]);
    printf("\n");
    return 0;
}
