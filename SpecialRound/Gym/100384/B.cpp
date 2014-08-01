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
    int n;
    ll a[] = {0, 
              9-0,
              91-19,
              910-109,
              9910-1099,
              99100-10099, 
              999100-100999, 
              9991000-1000999, 
              99991000-10009999,
              999991000-100099999, 
              9999910000-1000099999};
    cin >> n;
    cout << a[n] << endl;
    return 0;
}
