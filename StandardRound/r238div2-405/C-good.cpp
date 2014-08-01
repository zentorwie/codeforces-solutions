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
  int n, m[1010][1010];
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      scanf("%d", &m[i][j]);
  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      ans += m[i][j]*m[j][i];
    }
  }
  ans%=2;

  int t, q;
  scanf("%d", &q);
  while (q--) {
    scanf("%d", &t);
    if (t == 3)
      printf("%d", ans);
    else {
      ans = !ans;
      scanf("%*d");
    }
  }
  printf("\n");
  return 0;
}
