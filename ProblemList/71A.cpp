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
    int n;
    cin >> n;
    for (int i = 0; i < n ; i++) {
        string t;
        cin >> t;
        if (t.length() > 10) {
            printf("%c%d%c\n", t[0], t.length()-2, t[t.length()-1]);
        }
        else cout << t << endl;
    }

    return 0;
}
