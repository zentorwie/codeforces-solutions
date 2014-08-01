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

double rangen() {
    return (double)rand()/RAND_MAX;
}



int main()
{
    int n = 100000;
    int cnt = 0;
    for (int i = 0; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cnt++;
            printf("%d %d\n", i, j);
            if (cnt == n) return 0;
        }
    }
    
    return 0;
}
