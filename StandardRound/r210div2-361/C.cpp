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

#define NN 5010
int t[NN], l[NN], r[NN], d[NN];
int a[NN];
int conf[NN];

int main()
{
    memset(a, 0, sizeof(a));
    memset(conf, 0, sizeof(conf));
    int n, m;
    scanf("%d%d", &n, &m);

    for (int i = 0; i < m; i++) {
        scanf("%d%d%d%d", &t[i], &l[i], &r[i], &d[i]);
    }
    int ok = 1;
    for (int i = m-1; i >= 0; i--) {
        // printf("i = %d\n", i);
        // for (int j = 1; j <= n; j++) {
        //     if (j == n)
        //         printf("%d\n", a[j]);
        //     else
        //         printf("%d ", a[j]);
        // }
        if (t[i] == 2) {
            int min = 1000000007;
            int exist = 0;
            for (int j = l[i]; j <= r[i]; j++) {
                if (conf[j]) {
                    exist = 1;
                    if (a[j] < min) min = a[j];
                }
            }
            if (exist && d[i] < min) {
                ok = 0;
                // cout << "NO!!!" << endl;
                // for (int i = 1; i <= n; i++) {
                //     if (i == n)
                //         printf("%d\n", a[i]);
                //     else
                //         printf("%d ", a[i]);
                // }

                break;
            }

            for (int j = l[i]; j <= r[i]; j++) {
                if (!conf[j]) {
                    a[j] = d[i];
                    conf[j] = 1;
                }
                else {
                    if (a[j] > d[i]) {
                        a[j] = d[i];
                    }
                }
            }
        }
        else if (t[i] == 1) {
            for (int j = l[i]; j <= r[i]; j++) {
                if (conf[j])
                    a[j]-=d[i];
            }
        }
        // else {
        //     puts("error!");
        //     exit(1);
        // }
        
    }
    
    for (int i = 0; i < m; i++) {
        if (t[i] == 1) {
            for (int j = l[i]; j <= r[i]; j++)
                a[j] += d[i];
        }
        else {
            int maxm = -1000000007;
            for (int j = l[i]; j <= r[i]; j++) {
                if (a[j] > maxm) maxm = a[j];
            }
            if (maxm != d[i]) {
                puts("check failed!");
                return 0;
            }
            
        }
    }
    puts("Check ok!");
    

    if (ok) {
        printf("YES\n");
        for (int i = 1; i <= n; i++) {
            if (i == n)
                printf("%d\n", a[i]);
            else
                printf("%d ", a[i]);
        }
    }
    else 
        printf("NO\n");
    
       
    return 0;
}
