#include <cstdio>
#include <string>

using namespace std;

int main()
{
  int n, ll, rr, l, r, a[110] = {0};
  scanf("%d", &n);
  scanf("%d%d", &ll, &rr);
  n--;
  while (n--) {
    
    scanf("%d%d", &l, &r);
    for (int i = l+1; i <= r; i++)
      a[i] = 1;
  }
  int flag = 1;
  int ans = 0;
  for (int i = ll+1; i <= rr; i++) {
    if (a[i] == 0) ans++;
  }
  printf("%d\n", ans);
  
  return 0;
}
