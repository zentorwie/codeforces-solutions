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

struct man {
    int no;
    int c;
    int p;
    bool operator < (const man& a) const{
        if (p != a.p) 
            return p > a.p;
        return c < a.c;


    }
} man[1010];

struct table {
    int no;
    int s;
    bool operator < (const table& a) const{
        return s < a.s;
    }
} ta[1010];


int main()
{
    int n, k, vis[1010] = {0};

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &man[i].c, &man[i].p);
        man[i].no = 1+i;
    }
    scanf("%d", &k);
    
    for (int i = 0; i < k; i++) {
        scanf("%d", &ta[i].s);
        ta[i].no = 1+i;
    }

    sort(man, man+n);
    sort(ta, ta+k);
    
    // for (int i = 0; i < n; i++) {
    //     printf("<%d>%d  %d   %d<%d> %d\n",i,  man[i].p, man[i].c, ta[i].s, i, vis[i]);
    // }
    // return 0;
    
    int ac = 0, sum = 0;
    queue<pair<int, int> >q;
    for (int i = 0; i < n; i++) {
        int found = -1;
//        printf("the man money : %d %d\n", man[i].p,  man[i].c);
        for (int j = 0; j < k; j++) {
            //          printf("size:%d\n", ta[j].s);
            if (!vis[j] && ta[j].s >= man[i].c) {
                vis[j] = 1;
                found = j;
                break;
            }
        }
//        cout << found << endl;
        if (found != -1) {
            q.push(make_pair(man[i].no, ta[found].no));
            sum += man[i].p;
            ac++;
        }
    }
    printf("%d %d\n", ac, sum);
    while (!q.empty()) {
        printf("%d %d\n", q.front().first, q.front().second);
        q.pop();
    }

    
     
    return 0;
}
