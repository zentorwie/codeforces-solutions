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
    int n, k;
    int s[110];
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    }
    
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (s[i] > 0 && s[i] >= s[k]) ans++;
        else 
            break;
    }
    cout << ans << endl;


    return 0;
}
