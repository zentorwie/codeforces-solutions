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
    char str[1100];
    gets(str);
    int l = strlen(str);
    str[l-1] = 0;
    string s = str+1;
    int ll = s.length();
    if (ll == 0) {
        printf("0\n");
        return 0;
    }
    int p = 0;
    int ab[30] = {0};
    while (p < ll) {
        ab[s[p]-'a']++;
        p += 3;
    }
    int ans = 0;
    for (int i = 0; i < 30; i++) {
        if (ab[i]) ans++;
    }
    printf("%d\n", ans);
    return 0;
}
