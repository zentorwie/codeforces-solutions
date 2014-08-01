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
    int f[30]={0};
    int g[30]={0};
    char str[1100];

    scanf("%s", str);
    
    int l = strlen(str);
    for (int i = 0; i < l; i++) {
	f[str[i]-'a']++;
    }
    
    scanf("%s", str);
    l = strlen(str);
    for (int i = 0; i < l; i++) {
	g[str[i]-'a']++;
	if (f[str[i]-'a'] == 0) {
	    printf("-1\n");return 0;
	}
    }
    int ans = 0;
    for (int i = 0; i < 30; i++) {
	if (g[i] != 0) {
	    if (g[i] > f[i]) ans+=f[i];
	    else   ans += g[i];
	}
    }
    printf("%d\n", ans);
    return 0;
}
