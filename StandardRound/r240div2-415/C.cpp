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
    int n, k;
    cin >> n >> k;
    if (n / 2 > k) {
        cout << -1 << endl;
        return 0;
    }
    if (n == 1) {
        if (k == 0) printf("1\n");
        else printf("-1\n");
        return 0;
    }
    
    if (k == 0) {
        printf("-1\n");
        return 0;
    }

    if (n == 2 || n == 3) {
        int a = 0;
        printf("%d %d", k, 2*k);
        if (n == 3) printf(" 1000000000");
        printf("\n");
        return 0;
    }

    int cnt = n/2 - 1;
    printf("%d %d", (k-cnt), 2*(k-cnt));
    for (int i = 0; i < cnt; i++) {
        printf(" %d %d", 2*(i+k-cnt)+1, 2*(i+k-cnt)+2);
    }
    if (n%2) {
        printf(" 1000000000");
    }
    printf("\n");
    return 0;
}
