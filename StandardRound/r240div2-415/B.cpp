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


using namespace std;




int main()
{
    ll n, a, b, x;
    cin >> n >> a >> b;
    for (int i = 0; i < n; i++) {
        scanf("%I64d", &x);
        ll ans = a*x%b/a;
//        cout << x*a / b << endl;

        if (i == 0) {
            printf("%I64d", ans );
        }
        else {
            printf(" %I64d", ans);
        }
    }
    printf("\n");
    return 0;
}
