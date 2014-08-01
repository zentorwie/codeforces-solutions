#include <stdio.h>

int main()
{
  int n, q;
  int a[101] = {0};
  int w;
  scanf("%d%d", &n, &q);
  
  for (int i = 0; i < n; i++) {
    scanf("%d", &w);
    a[w]++;
  }


  int ans = 0;
  for (int i = 1; i <= 100; i++) {
    while (a[i] > 0) {
      if (i * 2 == q) {
	if (a[i] >= 2) {
	  a[i] -= 2;
	  ans++;
	}
	else
	  break;
      }
      else if (a[q - i] > 0) {
	a[i]--;
	a[q-i]--;
	ans++;
      }
      else
	break;
    }
  }
  
  printf("%d\n", ans);
  return 0;
}
