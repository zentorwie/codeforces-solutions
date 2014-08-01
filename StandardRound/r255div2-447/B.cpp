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


int main()
{
    string ss, s;
    int k;
    cin >> ss;
    s = "*";
    map<char,int> mp;
    s = s + ss;

    cin >> k;
    int maxm = 0;
    for (char c = 'a'; c <= 'z'; c++) {
        int v;
        cin >> v;
        mp[c] = v;
        maxm = max(maxm, v);
        //        printf("%c  v = %d\n", c, v);
    }
    
    ll sum = 0;
    int l = ss.length();

    ll ans = 0;
//    cout << s << endl;
    for (int i = 1; i <= l; i++) {
//        cout << mp[s[i]] ;
        ans += mp[s[i]] * i;
      }

    

    for (int i = 0; i < k; i++) {
        ans += maxm*(l+1+i);
    }
      cout << ans << endl;    

    
    return 0;
}
