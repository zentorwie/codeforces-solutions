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


struct node {
    int x, y;
    bool f;
};

struct cmp {
    bool operator () (const node &a, const node &b) const{
        if (a.y != b.y) return a.y < b.y;
        return a.x > b.x;
    }
};

priority_queue<node, vector<node>, cmp> q;

int main()
{
    int n;
    cin >> n;
    int maxi = -210000000;
    int mini = 2100000000;
    
    bool flag = 1;
    int a;
    int x = 0, y = -1;
    node p;
    int sum = 0;
    
    for (int i = 0; i < n; i++, flag = !flag) {
        cin >> a;
        sum += a;
        if (flag) {
            y++;
            p.f = 1;
            for (int j = 0; j < a; j++) {
                maxi = max(maxi, y);
                mini = min(mini, y);
                p.x = x;
                p.y = y;
                x++;
                y++;
                q.push(p);
//                printf("(%d, %d)\n", p.x, p.y);
            }
        }
        else {
            y--;
            p.f = 0;
            for (int j = 0; j < a; j++) {
                maxi = max(maxi, y);
                mini = min(mini, y);
                p.x = x;
                p.y = y;
                x++;
                y--;
                q.push(p);
//                printf("(%d, %d)\n", p.x, p.y);
            }
        }
    }
    
    // while (!q.empty()) {
    //     printf("(%d, %d) %d\n", q.top().x, q.top().y, q.top().f);
    //     q.pop();
    // }


    for (int i = maxi; i >= mini; i--) {
        for (int j = 0; j < sum; j++) {
            if (!q.empty()) {
                if (q.top().x == j && q.top().y == i) {
                    if (q.top().f) printf("/");
                    else printf("\\");
                    q.pop();
                }
                else printf(" ");
            }
            else printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
