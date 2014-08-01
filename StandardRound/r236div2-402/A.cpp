#include <cstdio>


using namespace std;

int main()
{
  int n, x;
  scanf("%d%d", &n, &x);
  
  int rest = 0, ans, a;
  for (int i = 0; i < n; i++) {
    scanf("%d", &a);
    rest += a;
  }
  if (rest < 0)
    rest = -rest;
  if (rest == 0)
    printf("0\n");
  else {
    int r = rest % x;
    ans = rest / x;  
    if (r)
      ans++;
    printf("%d\n", ans);
  }
  return 0;
}
