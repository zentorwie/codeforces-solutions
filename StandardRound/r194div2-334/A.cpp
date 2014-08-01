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
    int n;
    cin >> n;
    int l = 1, r = n*n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n/2; j++) {
            if (j == 0) 
                printf("%d %d", l, r);
            else 
                printf(" %d %d", l, r);
            l++;
            r--;
        }
        printf("\n");
    }
    
    return 0;
}
