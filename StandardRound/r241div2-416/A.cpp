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
    char s[10];
    int num;
    char ans[5];
    scanf("%d", &n);
    int l = -2000000000, r = 2000000000;
    int f1 = 1, f2 = 1;
    for (int i = 0; i < n; i++) {
        scanf("%s %d %s", s, &num, ans);
        int ll = strlen(s);
//        printf("%s %d %s\n", s, num, ans);
        if (ans[0] == 'N') {
            if (s[0] == '<') {
                s[0] = '>';
                ll = (2-ll)+1;
            }
            else {
                s[0] = '<';
                ll = (2-ll)+1;
            }
        }
        
        if (ll == 2) {
            if (s[0] == '>') {
                if (num > l) {
                    l = num;
                    f1 = 1;
                }
            }
            else {
                if (num < r) {
                    r = num;
                    f2 = 1;
                }
            }
        }
        else {
            if (s[0] == '>') {
                if (num >= l) {
                    l = num;
                    f1 = 0;
                }
            }
            else {
                if (num <= r) {
                    r = num;
                    f2 = 0;
                }
            }
        }
    }
    
    if (l > r) {
        printf("Impossible\n");
    }
    else if (l == r) {
        if (f1 && f2)
            printf("%d\n", l);
        else 
            printf("Impossible\n");
    }
    else if (r - l == 1) {
        if (f1 || f2) {
            if (f1) printf("%d\n", l);
            else printf("%d\n", r);
        }
        else
            printf("Impossible\n");
    }
    else {
        if (f1) printf("%d\n", l);
        else printf("%d\n", l+1);
    }
//    printf("%d %d\n%d %d\n", l, r, f1, f2);
    
    return 0;
}
