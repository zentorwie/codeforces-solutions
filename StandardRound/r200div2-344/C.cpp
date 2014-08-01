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



int main()
{
    ll ans = 0, a, b, x, y, p;
    cin >> a >> b;
    p = a % b;
    ans = a / b;
    y = 0;
    
    for (x = 1; x*x <= p; x++) {
        y = b - x;
        if (x * y == p) {
            break;
        }
    }
    ans += x + y;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << ans << endl;
    
    return 0;
}
