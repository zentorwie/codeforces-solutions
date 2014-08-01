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
    int n, p[110], a, cnt, min;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
	scanf("%d", &p[i]);
    }
    min = 100000000;
    for (int i = 0; i < n; i++) {
	cnt=0;
	for (int j = 0; j < p[i]; j++) {
	    scanf("%d", &a);
	    cnt += a*5;
	}
	cnt += p[i]*15;
	if (cnt < min)
	    min = cnt;
    }
    printf("%d\n", min);
    
    return 0;
}
