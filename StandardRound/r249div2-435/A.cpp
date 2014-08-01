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
    int n, m;
    int a[110];
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int now = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        now += a[i];
        if (now > m) {
//            printf("now = %d\n", now);
            cnt++;
            now = a[i];
        }
    }
    cnt++;
    cout << cnt << endl;
    
    return 0;
}
