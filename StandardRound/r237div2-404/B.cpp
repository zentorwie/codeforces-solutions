#include <cstdio>
#include <math.h>

int main()
{
  double oa, od;
  long long int a, d;
  int n;
  scanf("%lf%lf", &oa, &od);
  scanf("%d", &n);
  
  a = oa*1000000;
  d = od*1000000;
  unsigned long long int nx = 0, ny = 0, nd = 0;
  int dir = 0;
  unsigned long long int now = 0;
  unsigned long long int ses = 0;
  unsigned long long int per = 0;
  unsigned long long int ss = 0;
  for (int i = 0; i < n; i++) {
    now += d;
    
    while (1) {
      if ((ses+1)*a > now)
	break;
      ses++;
    }

    nd = ses*a;
    dir = ses % 4;
    ss = now-nd;
//    printf("now = %f\nses = %d\nnd = %f\ndir = %d\n", now, ses, nd, dir);
    switch(dir) {
    case 0: nx = ss; ny = 0; break;
    case 1: nx = a; ny = ss;   break;
    case 2: nx = a-ss; ny = a;break;
    case 3: nx = 0; ny = a-ss;break;
    default:break;

    }
    //  printf("dir = %d\n", dir);
    printf("%.6f %.6f\n", nx/1000000.0, ny/1000000.0);
  }


  return 0;
}
