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
typedef long long ll;
int t[50010][10];

int main()
{
    int m, n;
    ll a[50010] = {0}; 
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++) 
        for (int j = 0; j < n; j++) 
            scanf("%d", &t[i][j]);
    
    
    for (int j = 0; j < n; j++) {
        ll time = 0;
        for (int i = 0; i < m; i++) {
            if (time >= a[i]) {
                a[i] = time + t[i][j];
                time = time + t[i][j];
            }
            else {
                time = a[i] + t[i][j];
                a[i] = time;
            }
        }
    }
    for (int i = 0; i < m; i++) {
        if (i == m-1) {
            printf("%I64d\n", a[i]);
        }
        else
            printf("%I64d ", a[i]);
    }
    
    return 0;
}
