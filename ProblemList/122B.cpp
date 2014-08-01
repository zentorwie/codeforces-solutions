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
    string ss;
    cin >> ss;
    int n[11] = {0};
    int f = 0, s = 0;
    int l = ss.length();
    
    
    for (int i = 0; i < l; i++) {
        n[ss[i] - '0']++;
    }
    
    int maxi = 0;
    for (int i = 1; i <= 9; i++) {
        if (n[i] > n[maxi])
            maxi = i;
    }

    if (n[4] == 0 && n[7] == 0) printf("-1\n");
//    if (n[4] >= n[maxi] || n[7] >= n[maxi]) {
    else if (n[4] == n[7]) printf("4\n");
    else if (n[4] > n[7]) printf("4\n");
    else printf("7\n");
//    }
//    else 

    
    // printf("maxi = %d\n", maxi);
    // printf("n[1] = %d\n", n[1]);
    // printf("n[4] = %d\n", n[4]);
    // printf("n[7] = %d\n", n[7]);
    return 0;
}
