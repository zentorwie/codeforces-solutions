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

int main()
{
    int n, s, sum=0, max = 0, a;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cin >> a;
        sum += a;
        if (a > max) max = a;
    }
    sum -= max;
    if (sum <= s)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    
    return 0;
}
