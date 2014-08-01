#include <cstdio>
#include <string.h>
using namespace std;

int main()
{
  char str[400];
  
  scanf("%s", str);
  int plus = 0;
  int left = 0;
  int right = 0;
  int len = strlen(str);
  for (int i = 0; i < len; i++) {
    if (str[i] == '+')
      plus = i;
    if (str[i] == '=') {
      left = i-1;
      break;
    }
  }
  
  right = len - 1 - (left + 1);
//  printf("left = %d\nright = %d", left, right);
  if (left == right) {
    printf("%s\n", str);
  }
  else if ((left - right == 2) || (left - right == -2)) {
    if (left > right) {
      if (plus == 1) {
	for (int i = 0; i < left; i++) {
	  printf("%c", str[i]);
	}
	printf("=");
	for (int i = 0; i < right + 1; i++) {
	  printf("|");
	}
	printf("\n");
      }
      else {
	for (int i = 1; i < left + 1; i++) {
	  printf("%c", str[i]);
	}
	printf("=");
	for (int i = 0; i < right + 1; i++) {
	  printf("|");
	}
	printf("\n");
      }
    }
    else {
      for (int i = 0; i < left+1; i++) {
	printf("%c", str[i]);
      }
      printf("|=");
      for (int i = 0; i < right - 1; i++) 
	printf("|");
      printf("\n");
    }
    
  }
  else
    printf("Impossible\n");
  
  
  return 0;
}
