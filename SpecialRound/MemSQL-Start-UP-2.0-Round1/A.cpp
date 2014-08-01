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
#include <functional>

using namespace std;

#define PQ priority_queue
#define VT vector
#define MP make_pair
#define FOR(i, b, e) for(int i=b;i<e;i++)
#define CaseRead int _TT; scanf("%d", &_TT); for (int kase = 1; kase <= _TT; kase++)

typedef long long ll;

string s[] = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};

int main()
{
    int n;
    cin >> n;
    string t;
    cin >> t;
    for (int i = 0; i < 8; i++) {
        if (s[i].length() != n) continue;
        bool ok = 1; 
        for (int j = 0; j < n; j++) {
            if (t[j] != '.' && (t[j] != s[i][j])) {
                ok = 0;
                break;
            }
        }
        if (ok) {
            cout << s[i] << endl;
            return 0;
        }
    }
    
    return 0;
}
