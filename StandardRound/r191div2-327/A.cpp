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
typedef long long ll;
#define FOR(i, b, e) for(int i = b; i < e; i++)
using namespace std;

int main()
{
    int n, a[110];
    int cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i]) cnt++;
    }
    int ans = -110;
    int one = 0;
    int zero = 0;
    
    // if (n == 1) {
    //     printf("%d\n", !a[0]);
    //     return 0;
    // }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum=0;
            for (int k = i; k <= j; k++) {
                if (a[k] == 0) {
                    sum += 1;
                }
                else sum--;
            }
            if (sum > ans) ans = sum;
        }
    }

    printf("%d\n", ans+cnt);
    return 0;
}
