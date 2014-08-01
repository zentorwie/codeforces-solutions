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
#define FOR_N(i, b, e) for(int i = b; i <= e; i++)
#define REP(n) while(n--)
#define SCN(a) scanf("%d", &a)
#define MST(a) memset(a, 0, sizeof(a))
#define MST_1(a) memset(a, -1, sizeof(a))

#define VIT(a) vector<a>::iterator

using namespace std;


int main()
{
    int n, m, k;

    cin >> n >> m >> k;

    int cx = 1, cy = 1;
    int flag = 1;
    // 1 for to-right
    
    int cnt = n*m;
    while (k > 1) {
        printf("2");
        int cur = 2;
        while (cur--) {
            printf(" %d %d", cx, cy);
            if (flag == 1) {
                if (cy == m) {
                    flag = 0;
                    cx++;
                }
                else 
                    cy++;

            }
            else {
                if (cy == 1) {
                    flag = 1;
                    cx++;
                }
                else 
                    cy--;
            }
            cnt--;
        }
        k--;
        printf("\n");
    }
    
    printf("%d", cnt);
    while (cnt--) {
//        printf("cx = %d, cy = %d, flag = %d\n", cx, cy, flag);

        printf(" %d %d", cx, cy);
        if (flag == 1) {
            if (cy == m) {
                flag = 0;
                cx++;
            }
            else 
                cy++;
        }
        else {
            if (cy == 1) {
                flag = 1;
                cx++;
            }
            else 
                cy--;
        }
    }
    printf("\n");
    return 0;
}
