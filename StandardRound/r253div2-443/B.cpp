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
    int k;
    string s;
    cin >> s;
    cin >> k;

    string ns = "";
    for (int i = 0; i < k; i++) {
        ns += '*';
    }
    
    s += ns;
    cout << s << endl;
    int l = s.length();
    cout << "l = " << l << endl;
    int ans = 0;
    for (int i = 0; i < l-1; i++) {
        for (int n = 1; i+2*n-1 < l; n++) {
            bool ok = 1;
            for (int j = 0; j < n; j++) {
                if (!((s[i+j] == s[i+j+n]) || (s[i+j] == '*' || s[i+j+n] == '*'))) {
                    ok = 0;
                    break;
                }
            }
            if (ok) ans = max(ans, 2*n);
        }
    }
    printf("%d\n", ans);
    return 0;
}
