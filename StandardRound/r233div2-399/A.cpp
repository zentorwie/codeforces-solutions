#include <cstdio>

int main()
{
  int n, p, k, head=0, end=0;
  scanf("%d%d%d", &n, &p, &k);
  int left = 1, right = n;
  
  if (p - k <= 1) {
    head = 1;
    left = 1;
  }
  else
    left = p - k;
  
  if (p + k >= n) {
    end = 1;
    right = n;
  }
  else
    right = p + k;

  if (!head)
    printf("<< ");

  for (int i = left; i <= right; i++) {
    if (i == p)
      printf("(%d)", p);
    else
      printf("%d", i);
    if (i != right)
      printf(" ");
  }
  
  if (!end)
    printf(" >>\n");
  else
    printf("\n");
  
  
  return 0;
}
