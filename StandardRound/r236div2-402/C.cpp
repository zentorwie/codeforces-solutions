#include <cstdio>

#define MAX 1000010

using namespace std;




int main()
{
  int n, m;
  scanf("%d%d", &n, &m);
  int ok = 1;
  int base[MAX] = {0};


  int r, q;
  q = m / (n+1);
  r = m % (n+1);

  if (n > m+1) {
    printf("-1\n");
    return 0;
  }
  else if (n == m+1) {
    putchar('0');
    for (int i = 0; i < m; i++) {
      printf("10");
    }
    printf("\n");
    return 0;
  }



  if (q > 2 || (q == 2 && r > 0)) {
    printf("-1\n");
    return 0;
  }

  for (int j = 0; j < r; j++) { 
    for (int k = 0; k < q+1; k++) 
      putchar('1');
    putchar('0');
  }
  for (int j = 0; j < n-r; j++) { 
    for (int k = 0; k < q; k++) 
      putchar('1');
    putchar('0');
  }
  for (int k = 0; k < q; k++) 
    putchar('1');
  putchar('\n');

  return 0;
}
