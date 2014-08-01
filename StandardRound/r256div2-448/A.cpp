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
    int a1, a2, a3;
    int b1, b2, b3;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    int n;
    cin >> n;
    int a = a1 + a2 + a3;
    int b = b1 + b2 + b3;
    
    int p = a / 5;
    int q = b / 10;

    if (a % 5) p++;
    if (b % 10) q++;
    if (p + q <= n) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
