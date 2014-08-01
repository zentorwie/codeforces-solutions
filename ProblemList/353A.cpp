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
#include <functional>

using namespace std;

typedef long long ll;


int main()
{
    int n;
    scanf("%d", &n);
    int s1=0, s2=0;
    int cnt=0;
    int x, y;
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &x, &y);
        if ((x^y)&1) {
            cnt++;
        }
        s1+=x; s2+=y;
    }
//    printf("%d %d\n", s1, s2);;
    if (s1%2==0 && s2%2==0) printf("0\n");
    else if (s1%2 && s2%2 && cnt > 0) {
        printf("1\n");
    }
    else 
        printf("-1\n");
    return 0;
}
