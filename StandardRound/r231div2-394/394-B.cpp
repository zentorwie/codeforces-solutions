#include <cstdio>
#include <string>

int main()
{
  int p, x;
  scanf("%d%d", &p, &x);
  int base = 1;
  int top = 1;
  for (int i = 0; i < p-1; i++) {
    base = base*10;
  }
  top = base * 10 - 1;

  int sml = 0;
  int rst = 0;
  int btf = 0;
  int flag = 0;
  for (int n = base; n <= top; n++) {
    if (n * x > top) {
      break;
    }
    sml = n % 10;
    rst = n / 10;
    btf = sml * base + rst;
    if (n * x == btf) {
      btf = n;
      flag = 1;
      break;
    }
  }
  
  if (flag) 
    printf("%d\n", btf);
  else
    printf("Impossible\n");
}
