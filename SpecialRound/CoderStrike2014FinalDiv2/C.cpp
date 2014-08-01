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


set<int> st;

int pos[100100];
int app[100100];
int cur[100100];

struct rec {
    int sg;
    int id;
} r[100100];

int main()
{
    int n, m;
    char ch;
    int id;
    scanf("%d%d", &n, &m);
    getchar();
    for (int i = 1; i <= n; i++) {
        pos[i] = 1;
        app[i] = 0;
        cur[i] = 0;
    }

    
    int cnt = 0;
    int ans = n;
    int app_cnt = 0;
    int last = 0;
    int top = 0;
    int flag = -255;
    int cat = 0;
    int mid = 0;
    int gogo = 0;
    for (int i = 0; i < m; i++) {
        scanf("%c %d\n", &ch, &id);
//        printf("%c %d\n", ch, id);
        r[i].id = id;
        if (ch == '+') {
            st.insert(id);
            r[i].sg = 1;
            cur[id]++;
            if (cur[id] == 1) 
                cnt++;
        }
        else {
            st.erasse(id);
            r[i].sg = 0;
            cur[id]--;
            if (cur[id] == 0)
                cnt--;
        }
        if (cat == 1) continue;
        
        if (app[id] == 0 && ch == '-') {
            cat = 1;
            mid = i;
            gogo = id;
        }
        app[id] = 1;
    }
    
    int closed = 0;
    
    if (cat) {
        int k = 0;
        for (; k < mid; k++) {
            if (pos[r[k].id] == 1) ans--;
            pos[r[k].id] = 0;
        }
        for (k++; k < m; k++) {
            if (r[k].sg == 1) {
                if (pos[r[k].id] == 1) ans--;
                pos[r[k].id] = 0;
            }
            else {
                if (app[r[k].id] == 0) {
                    pos[gogo] = 0;
                    ans--;
                    gogo = r[k].id;
                }
            }
        }
        
    }
    else {
        
    }

    

    return 0;
}
