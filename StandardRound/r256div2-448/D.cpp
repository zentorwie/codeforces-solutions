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
vector<ll> v;

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    set<ll> st;
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= m; j++) {
//            v.push_back(i*j);
            st.insert(i*j);
        }
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
//        printf("%lld\t%lld\n", i+1, v[i]);
    }
    cout << "type: " << st.size() << endl;    
    return 0;
}
