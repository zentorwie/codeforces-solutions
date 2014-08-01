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
    int x[5] = {0};
    int t;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &t);
        x[t]++;
    }
    int ans = 0;
    ans = x[4];

    int t1 = min(x[3], x[1]);
    int t2 = x[2] / 2;
    ans += x[3];
    ans += t2;
    x[3] -= t1;
    x[1] -= t1;
    x[2] -= t2*2;
    
    if (x[2] == 1) {
        ans++;
        int t3 = min(2, x[1]);
        x[1] -= t3;
    }
    // for (int i = 0; i <= 4; i++) {
    //     printf("%d : %d\n", i, x[i]);
    // }
//    printf("ans = %d\n", ans);
    ans += (x[1]/4 + (x[1]%4==0? 0:1));
//    printf("t1 = %d, t2 = %d\n", t1, t2); 
    printf("%d\n", ans);
    return 0;
}
