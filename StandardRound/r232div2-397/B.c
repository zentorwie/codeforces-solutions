#include <stdio.h>

int main()
{
  int t;
  scanf("%d", &t);
  
  while (t--) {
    int n, l, r, shang, yu, cha;
    scanf("%d%d%d", &n, &l, &r);
    int ok = 1;
    int first_b, first_r;

   
    int base_num = n / r + 1;
    int over = base_num * r - n;
    int diff = r - l;
    if (l > n)
      ok = 0;
    else if (diff == 0) {
      if (n % r == 0)
	ok = 1;
      else 
	ok = 0;
    }
    else if (over == r)  // zero
      ok = 1;
    else if (diff >= over) // one
      ok = 1;
    else if (diff < over) {
      first_b = over / diff;
      first_r = over % diff;
      if (first_r == 0) {
	if (first_b <= base_num)
	  ok = 1;
	else
	  ok = 0;
      }
      else { // first_r != 0
	if (base_num - first_b >= 1) {
	  ok = 1;
	}
	else 
	  ok = 0;
      }
    }



    if (ok)
      printf("Yes\n");
    else
      printf("No\n");
    
  }
  return 0;
}
