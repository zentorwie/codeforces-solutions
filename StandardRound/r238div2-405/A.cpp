#include <iostream>
#include <cstdio>
#include <cmath>
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

using namespace std;

int main()
{
  int n;
  int b[110];
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", &b[i]);
  sort(b, b+n);
  for (int i = 0; i < n-1; i++)
    printf("%d ", b[i]);
  printf("%d\n", b[n-1]);
  return 0;
}
