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
    int n, m, s, f, t, l, r;
    char ch;
    scanf("%d%d%d%d", &n, &m, &s, &f);
    if (s > f) ch = 'L';
    else ch = 'R';
    
    int cur = 1;
    int cnt = 0;

    if (ch == 'L') {
        for (int i = 0; i < m; i++) {
            cnt = scanf("%d%d%d", &t, &l , &r);
            if (cnt == -1) {
                t = 1000000009;
                l = 0;
                r = 0;
            }
            while (cur < t) {
                cur++;
                s--;
                putchar(ch);
                if (s == f) {
                    printf("\n");
                    return 0;
                }
            }
            cur++;
            if ((s - 1 >= l && s - 1 <= r) || (s >= l && s <= r))
                putchar('X');
            else {
                putchar(ch);
                s--;
            }
            if (s == f) {
                printf("\n");
                return 0;
            }
        }        
        
    }
    else {
        for (int i = 0; i < m; i++) {
            scanf("%d%d%d", &t, &l, &r);
            if (cnt == -1) {
                t = 1000000009;
                l = 0;
                r = 0;
            }

            while (cur < t) {
                cur++;
                s++;
                putchar(ch);
                if (s == f) {
                    printf("\n");
                    return 0;
                }
            }
            cur++;
            if ((s + 1 >= l && s + 1 <= r) || (s >= l && s <= r)) 
                putchar('X');
            else {
                putchar(ch);
                s++;
            }
            if (s == f) {
                printf("\n");
                return 0;
            }
        }        
    }
    while (s > f) {
        s--;
        putchar('L');
    }
    while (s < f) {
        s++;
        putchar('R');
    }
    printf("\n");
    
    
    
    return 0;
}
