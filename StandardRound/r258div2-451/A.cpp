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

#define PQ priority_queue
#define VT vector
#define MP make_pair

typedef long long ll;


int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    if (min(n, m) % 2 == 0) printf("Malvika\n");
    else printf("Akshat\n");
    
    return 0;
}
