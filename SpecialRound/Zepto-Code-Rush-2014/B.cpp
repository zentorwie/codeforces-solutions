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

int dx[] = {2, 1, 1};
int dy[] = {0, -1, 1};
char dc[] = {'U', 'R', 'L'}; 
char mp[2010][2010];
int main()
{
    int n, m, o;
    scanf("%d%d%d", &n, &m, &o);
    for (int i = 0; i < n; i++) {
        scanf("%s", mp[i]);
    }
    for (int z = 0; z < m; z++) {
        int cnt = 0;
        for (int k = 0; k < 3; k++) {
            int x = 0;
            int y = z;
            while (1) {
                x += dx[k];
                y += dy[k];
                if (!(x >= 0 && x < n && y >= 0 && y < m)) break;
                if (mp[x][y] == dc[k]) cnt++;
            }
        }
        if (z == 0) printf("%d", cnt);
        else        printf(" %d", cnt);
    }

    printf("\n");
    
    return 0;
}
