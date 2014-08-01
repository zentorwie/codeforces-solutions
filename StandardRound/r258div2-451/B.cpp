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
    int n;
    scanf("%d", &n);
    int a[100100];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    if (n == 1) {
        printf("yes\n1 1\n");
        return 0;
    }
    else if (n == 2) {
        if (a[1] > a[0]) printf("yes\n1 1\n");
        else printf("yes\n1 2\n");
        return 0;
    }

    int lcnt = 0, rcnt = 0, l, r;

    for (int i = 1; i < n-1; i++) {
        if (a[i] > a[i-1] && a[i] > a[i+1]) {
            lcnt++;
            l = i;
        }
        if (a[i] < a[i-1] && a[i] < a[i+1]) {
            rcnt++;
            r = i;
        }
    }
    
    if (lcnt > 1 || rcnt > 1) {
        printf("no\n");
    }
    else if (lcnt == 0 && rcnt == 0) {
        if (a[n-1] > a[0]) printf("yes\n1 1\n");
        else printf("yes\n1 %d\n", n);
    }
    else if (lcnt == 0) {
        if (a[0] <= a[r+1]) printf("yes\n1 %d\n", r+1);
        else                printf("no\n");
    }
    else if (rcnt == 0) {
        if (a[n-1] >= a[l-1]) printf("yes\n%d %d\n", l+1, n);
        else printf("no\n");
    }
    else {
        if (a[l] <= a[r+1] && a[r] >= a[l-1]) printf("yes\n%d %d\n", l+1, r+1);
        else printf("no\n");
    }


    return 0;
}
