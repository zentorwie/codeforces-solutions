#include <cstdio>

int main()
{
  long long int n, m, x, y, z, p, a, b, na, nb, t;
  scanf("%I64d%I64d%I64d%I64d%I64d%I64d", &n, &m, &x, &y, &z, &p);
  long long int ln = n;
  long long int lm = m;

  x = x % 4;
  y = y % 2;
  z = z % 4;
  while (p--) {
    scanf("%I64d%I64d", &a, &b);
    n = ln;
    m = lm;
    
    for (int i = 0; i < x; i++) {
      nb = n+1-a;
      na = b;
      t = m;
      m = n;
      n = t;
      a = na;
      b = nb;
    }
    if (y) {
      b = m+1-b;
    }
    for (int i = 0; i < z; i++) {
      na = m+1-b;
      nb = a;
      t = m;
      m = n;
      n = t;
      a = na;
      b = nb;
    }
    printf("%I64d %I64d\n", a, b);
    
  }
  
  return 0;
}
