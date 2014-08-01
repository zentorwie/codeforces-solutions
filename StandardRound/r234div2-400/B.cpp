#include <cstdio>
#include <string>

int main()
{
  int n, m;
  char str[1100];
  int a[1100] = {0};
  scanf("%d%d", &n, &m);
  int ans;
  int ok = 1;
  for (int i = 0; i < n; i++) {

    scanf("%s", str);
    int d = -1, c = -1;
    for (int j = 0; j < m; j++) {
      if (str[j] == 'G') d = j;
      else if (str[j] == 'S') c = j;
    }
    if (c < d) {
      ok = 0; 
      break;
    }
    a[c - d]++;
  }
  
  
  
  if (ok) {
    for (int i = 0; i < 1000; i++) {
      if (a[i]) ans++;
    }
    printf("%d\n", ans); 
  }
  else printf("-1\n");


}
