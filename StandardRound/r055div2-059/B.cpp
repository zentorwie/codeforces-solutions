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
  int odd=0, even=0, ans=0, min_o=11000, n, a;
  scanf("%d", &n);

  while (n--) {
    scanf("%d", &a);
    if (a%2) {odd++;if (a < min_o) min_o = a;}
    else even++;
    ans += a;
  }

  if (ans % 2 == 0) {
    if (odd == 0)
      ans = 0;
    else
      ans -= min_o;
  }
  printf("%d\n", ans);
  
  return 0;
}
