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
    string s;
    cin >> n >> s;
    if (n == 1) {
        printf("0\n");
        return 0;
    }
    
    int ans = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i-1])
            ans++;
    }
    printf("%d\n", ans);
    return 0;
}
