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

set<int> x;
set<int> y;
map<int, int> m, p;
set<pair<int, int> > v;
int deal()
{
    int a[3] = {3, 2, 3};
    set<int>::iterator it = x.begin();
    if (x.size() != 3 || y.size() != 3) return 0;
    it = x.begin();
    for (int i = 0; i < 3; i++) {
        if (m[*it] != a[i]) return 0;
        it++;
    }

    it = y.begin();
    for (int i = 0; i < 3; i++) {
        if (p[*it] != a[i]) return 0;
        it++;
    }
    return 1;
}

int main()
{
    int a, b, ok = 1;
    for (int i = 0; i < 8; i++) {
        cin >> a >> b;
        
        if (v.find(make_pair(a, b)) != v.end()) ok = 0;
        v.insert(make_pair(a, b));
        x.insert(a);
        y.insert(b);
        if (m.count(a)) m[a]++;
        else m[a] = 1;
        if (p.count(b)) p[b]++;
        else p[b] = 1;
    }
    if (!ok) {
        cout << "ugly" << endl;
        return 0;
    }
        
    
    if (deal()) cout << "respectable" << endl;
    else cout << "ugly" << endl;

    
    return 0;
}
