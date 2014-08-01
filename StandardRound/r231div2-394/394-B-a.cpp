#include <stdio.h>

#include <string>


int main() 
{
  int p, x;
  char n[1000010] = {0};
  int b = 0;
  int t = 0; // to store 
  int next = 0;
  int ptr = 0; // place
  int ok = 0;
  scanf("%d%d", &p, &x);

  if (x == 1) {
    for (int i = 0; i < p; i++) {
      printf("1");
    }
    printf("\n");
    return 0;
  }
  for (b = 1; b <= 9; b++) { //from 1 to 9
    if (ok)
      break;
    n[0] = b;
    next = 0;
    t = 0;
    for (ptr = 0; ptr < p; ptr++) {
      next = n[ptr] * x + t;
      t = next / 10;
//      printf("next = %d\n", next);      
      if (ptr == p-1) {
	if (t == 0 && (next % 10 == n[0]) && n[p-1] != 0) {
	  ok = 1;
	}
      }
      else {
	n[ptr+1] = next % 10;
      }

    }

  }

  if (ok) {
    for (int i = p - 1; i >= 0; i--) {
      printf("%d", n[i]);
    }
    printf("\n");
  }
  else 
    printf("Impossible\n");
  

  return 0;
}
