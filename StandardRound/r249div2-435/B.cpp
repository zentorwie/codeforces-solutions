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
    string s;
    int k;
    cin >> s >> k;
    string t = s;
    int n;
    sort(t.begin(), t.end(), greater<char>());

    int l = s.length();
    int p = 0;
    char tmp;
    int maxi, mi;
    
    for (;;) {
        while (p < l && s[p] == t[p]) p++;
        if (p == l) break;
        
        if (k < (l-1-p)) {
            printf("+k = %d\n", k);
            maxi = s[p] - '0';
            mi = p;
            for (int i = 1; i <= k; i++) {
                if (s[p+i] - '0' > maxi) {
                    maxi = s[p+i] - '0';
                    mi = p+i;
                }
            }
            for (int i = mi; i > p; i--) {
                s[i] = s[i-1];
            }
            s[p] = maxi+'0';
            k -= (mi-p);
            if (k <= 0)
                break;
        } else {
            printf("k = %d\n", k);
            maxi = s[p] - '0';
            mi = p;
            for (int i = p+1; i < l; i++) {
                if (s[i] - '0' > maxi) {
                    maxi = s[i] - '0';
                    mi = i;
                }
            }
            for (int i = mi; i > p; i--) {
                s[i] = s[i-1];
            }
            s[p] = maxi + '0';
            
            k -= (mi-p);
        }
    }
    cout << s << endl;
    

    return 0;
}
