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


char c[1010][12][12];
int w[1010][1010] = {0};
vector<int> G[1010];
int main()
{
    int n, m, k, w;
    scanf("%d%d%d%d", &n, &m, &k, &w);
    
    for (int z = 0; z < k; z++) {
        for (int i = 0; i < n; i++)
            scanf("%s", c[z][i]);
    }

    int ans = 0;

    for (int i = 0; i < k-1; i++) {
        for (int j = i+1; j < k; j++) {
            for (int x = 0; x < n; x++) {
                for (int y = 0; y < m; y++) {
                    
                }
            }
        }
    }

    return 0;
}
