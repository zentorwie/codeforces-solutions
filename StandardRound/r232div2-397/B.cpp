#include <stdio.h>

int main()
{
  int t;
  scanf("%d", &t);
  
  while (t--) {
    long long int n, l, r, shang, yu, cha;
    scanf("%l64d%l64d%l64d", &n, &l, &r);
    int ok = 1;
    long long int first_b, first_r;

   
    long long int base_num = n / r + 1;
    long long int over = base_num * r - n;
    long long int diff = r - l;
    if (l > n)
      ok = 0;
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

//    printf("base = %l64d\nover = %l64d\ndiff = %l64d\n", base_num, over, diff);
//    printf("first_b =%l64d\nfirst_r = %l64d\n", first_b, first_r);


    if (ok)
      printf("Yes\n");
    else
      printf("No\n");
    
  }
  return 0;
}
