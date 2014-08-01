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
    int a, b, c;
    cin >> a >> b >> c;
    int i;

    int ok = 0;
    
    for (i = 0; i <= a; i++) {

        if (a - i <= c && i <= b && b - i == c - a + i) {
            ok = 1;
            break;
        }
    }
    
    if (ok) printf("%d %d %d\n", i, c-a+i, a-i);
    else printf("Impossible\n");

    return 0;
}
