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
    string s;
    cin >> s;
    int a[5000];
    int cnt = 0;
    if (s.length() < 4) {cout << 0 << endl; return 0;}
    for (int i = 0; i < s.length()-3; i++) {
        if (s[i] == 'b' && s[i+1] == 'e' && s[i+2] == 'a' && s[i+3] == 'r') {
            a[cnt++] = i;
        }
    }
    int p = 0; 
    int ans = 0;
    for (int i = 0; i < cnt; i++) {
        ans += (a[i]-p+1)*(s.length()-1-(a[i]+3)+1);
        p = a[i]+1;
//        cout << "p = " << p << endl;
    }
    cout << ans << endl;
    return 0;
}
