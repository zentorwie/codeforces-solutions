#include <stdio.h>


int main()
{
  int N;
  char ch1, ch2;
  char m[400][400];
  scanf("%d", &N);
  
  for (int i = 0; i < N; i++)
    scanf("%s", m[i]);

  ch1 = m[0][0];
  ch2 = m[0][1];
  int ok = 1;
  int flag = 0;
  for (int i = 0; i < N; i++) 
    for (int j = 0; j < N; j++) {
      if (i == j || (i+j+1 == N)) {
	if (m[i][j] != ch1)  {
	  ok = 0;break;
	}
      }
      else  {
	if (m[i][j] != ch2) {
	  ok = 0;break;
	}
      }	
    }
  if (ch1 == ch2) ok = 0;
  printf("%s\n", ok? "YES" : "NO");
  

  return 0;
}
