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
    vector<int> v;
    int cnt=0;
    int ans=0;
    int a[100010];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] == i) ans++;
        else {
            cnt++;
            v.push_back(i);
        }
    }
//    printf("ans = %d\n", ans);
    
    if (cnt == 2 || cnt == 0) ans = n;
    else {
        ans++;
        for (int i = 0; i < cnt; i++) {
            int p = v[i];
            if (p == a[a[p]]) {
                ans++;
                break;
            }
        }
    }
    
    
    printf("%d\n", ans);
    
    return 0;
}
