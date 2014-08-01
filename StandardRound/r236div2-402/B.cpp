#include <cstdio>



#define MAX 4010
using namespace std;

int main()
{
  int a[MAX] = {0}, mark, div1, div2, p, x, k;
  scanf("%d%d", &x, &k);

  for (int i = 0; i < k; i++) {
    scanf("%d", &mark);
    scanf("%d", &p);
    a[p] = 2;
    if (mark == 1) {
      scanf("%d", &p);
      a[p] = 1;      
    }
  }
  int min = 0, max = 0;
  a[x] = 1;
  a[0] = 0;
  int set = 0;
  for (int i = 1; i <= x; i++) {
    if (a[i]) {
      if (set > 0) {
//	printf("min = %d\n", min);
	min += set / 2;
	if (set % 2 == 1) {
//	  if (a[i - set - 1] != 2) {
	    min++;
	   
//	  }
//	  printf("i = %d, min = %d\n", i, min);
	}
      }
      set = 0;

    }
    else {
      max++;
      set++;
    }
  }
  // for (int i = 0; i <= x; i++) 
  //   printf("%3d", a[i]);
  // printf("\n");
  printf("%d %d\n", min, max);
  return 0;
}
