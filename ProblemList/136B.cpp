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
    int n1, n2;
    int a[20], b[20];
    int l1 = 0, l2 = 0;
    
    cin >> n1 >> n2;
    
    while (n1) {
        a[l1++] = n1%3;
        n1/=3;
    }
    while (n2) {
        b[l2++] = n2%3;
        n2/=3;
    }


    int m = max(l1, l2);
    while (l1 < m) {
        a[l1++] = 0;
    }
    while (l2 < m) {
        b[l2++] = 0;
    }
    
    int t[20] = {0};
    for (int i = m; i>=0; i--) {
        t[i] = (b[i]+3-a[i])%3;
    }
    
    int base = 1;
    int ans = 0;
    for (int i = 0; i < m; i++) {
//        printf("\t%d\n", t[i]);
        ans += t[i]*base;
        base *= 3;
    }
    printf("%d\n", ans);
    return 0;
}
