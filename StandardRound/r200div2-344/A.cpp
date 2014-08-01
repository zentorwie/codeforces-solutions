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
    int cnt = 0, po = 0, pp = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &po);
        if (po != pp)
            cnt++;
        pp = po;
    }
    printf("%d\n", cnt);
    
    return 0;
}
