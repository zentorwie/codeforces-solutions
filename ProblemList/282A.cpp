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
    scanf("%d", &n);
    char s[5];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        scanf("%s", s);
        if (s[1] == '+') ans++;
        else ans--;
    }
    printf("%d\n", ans);
        
    return 0;
}
