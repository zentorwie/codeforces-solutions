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
    int a[5];
    for (int i = 1; i <= 4; i++) cin >> a[i];


    string s;
    cin >> s;
    int l = s.length();
    char prev = 0;
    int ans = 0;
    
    
    for (int i = 0; i < l; i++) {
        ans += a[s[i]-'0'];
    }
    cout << ans << endl;
    return 0;
}
