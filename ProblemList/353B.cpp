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


struct node {
    int num;
    int id;
    bool operator < (const node& b) const {
        return num < b.num;
    }
};

int main()
{
    int n;
    scanf("%d", &n);

    node a[220] = {0};
    for (int i = 0; i < 2*n; i++) {
        scanf("%d", &a[i].num);
        a[i].id = i;
    }

    sort(a, a+2*n);

    set<int> st[2];
    
    int ans[220];

    
    int c1=0, c2=0;
    int n1=0, n2=0;
    vector<int> v1, v2;
    int p1, p2;
    for (int i = 0; i < 2*n; i++) {
    }

    printf("%d\n", c1*c2);

    for (int i = 0; i < 2*n; i++) {
        printf("%s%d", (i==0? "" : " "), ans[i]);
    }
    
    puts("");

    
    return 0;
}
