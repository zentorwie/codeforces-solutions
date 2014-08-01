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
#define FOR_N(i, b, e) for(int i = b; i <= e; i++)
#define REP(n) while(n--)
#define SCN(a) scanf("%d", &a)
#define MST(a) memset(a, 0, sizeof(a))
#define MST_1(a) memset(a, -1, sizeof(a))

#define VIT(a) vector<a>::iterator

using namespace std;


int main()
{
    string s[4];
    for (int i = 0; i < 4; i++) {
        cin >> s[i];
        s[i].erase(0, 2);
//        cout << s[i] << endl;
    }
    
    set<int> ans;

    for (int i = 0; i < 4; i++) {
        int c1 = 0;
        int c2 = 0;
        for (int j = 0; j < 4; j++) {
            if (i == j) continue;
            if (s[i].length() >= s[j].length()*2) c1++;
            if (s[i].length()*2 <= s[j].length()) c2++;
        }
        if (c1 == 3) ans.insert(i);
        if (c2 == 3) ans.insert(i);
    }
    if (ans.size() == 1) printf("%c\n", 'A'+*ans.begin());
    else printf("C\n");
    
    
    return 0;
}
