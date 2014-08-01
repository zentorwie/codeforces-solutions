#include <cstdio>

int main()
{
  char str[20];
  int t;
  int p[6] = {12, 6, 4, 3, 2, 1};
  scanf("%d", &t);
  while (t--) {
    int cnt = 0;
    int ok[6] = {0, 0, 0, 0, 0, 0};
    scanf("%s", str);
    for (int si = 0; si < 6; si++) {
      int n = p[si];
      int row = 12 / n;
      for (int i = 0; i < n; i++) {
	int row_ok = 1;
	for (int j = 0; j < row; j++) 
	  if (str[i+j*n] == 'O') row_ok = 0;
	
	if (row_ok == 1) {ok[si] = 1; break;}
      }
      if (ok[si]) cnt++;
    }
    printf("%d", cnt);
    if (cnt) {
      printf(" ");
      for (int i = 0; i < 5; i++) {
	if (ok[i]) printf("%dx%d ", 12/p[i], p[i]);
      }
      if (ok[5]) printf("%dx%d ", 12/p[5], p[5]);
    }
    printf("\n");
	  
  }

}
