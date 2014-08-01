#include <stdio.h>




int main()
{
  int nb=0, nr=0;
  char ch;
  long long int s[100] = {0};
  int n;
  long long int ans = 0;
  scanf("%d", &n);
  getchar();
 
  s[1] = 1;
  s[2] = 2;
  for (int i = 3; i <= n; i++) {
    for (int j = 1; j < i; j++) {
      s[i] += s[j];
    }
  }
  
  for (int i = 1; i <= n; i++) {
    scanf("%c", &ch);
    if (ch == 'B')
      ans+=s[i];
  }
  printf("%I64d\n", ans);

  return 0;
}
