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
    int l = s.length();
    
    int c = 0;
    for (int i = 0; i < l; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') c++;
    }
    if (l - c <= 1) {
        for (int i = 0; i < l; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] -= ('A' - 'a');
            else s[i] += ('A'-'a');
        }
    }
    cout << s << endl;
    return 0;
}
