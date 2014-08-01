#include <stdio.h>
#include <string.h>
int main()
{
  int n, m;
  scanf("%d%d", &n, &m);
  
  int A[1010][1010];
  int p[1010]={0}, min;
  int s[1010]={0};
  int full=0, half=0, zero=0;
  char str[5];
  
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) {
      scanf("%s", str);

      if (str[0] == '1' && str[1] == '1')
	full++;
      else if (str[0] == '0' && str[1] == '0')
	zero++;
      else
	half++;
      
    }
  //printf("%d %d %d\n", full, half, zero);

  //search
  while (full || half) {
    min = 0;
    for (int i = 0; i < m; i++) {
      if (s[i] < s[min]) 
	min = i;
    }
    if (full) {
      A[p[min]][min] = 2;
      s[min] += 2;
      full--;
    }
    else {
      A[p[min]][min] = 1;
      s[min] += 1;
      half--;
    }
    
    p[min]++;
  }

  


  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m-1; j++) {
      if (A[i][j] == 2)
	printf("11 ");
      else if (A[i][j] == 1 && i % 2 == 0)
	printf("01 ");
      else if (A[i][j] == 1 && i % 2 == 1)
	printf("10 ");
      else
	printf("00 ");
    }
    if (A[i][m-1] == 2)
      printf("11");
    else if (A[i][m-1] == 1 && i % 2 == 0)
      printf("01");
    else if (A[i][m-1] == 1 && i % 2 == 1)
      printf("10");
    else
      printf("00");
    printf("\n");
  }
  
  return 0;
}
