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

const long long int mod = 1000000007;
long long int d[1100];
int n, loc, po[1100];

int main()
{
    memset(d, 0, sizeof(d));
//    long long int ans = 0, cnt[1100] = {0}; 

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
	scanf("%d", &po[i]);
    }
    d[1] = 2;
    for (int i = 2; i <= n; i++) {
	for (int j = po[i]; j < i; j++) {
	    d[i] = (d[i] + d[j]) % mod;
	}
	d[i] += 2;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
	ans = (ans + d[i]) % mod;
//	printf("d[%d] = %lld\n", i, d[i]);
    }    
    cout << ans%mod << endl;
    return 0;
}
