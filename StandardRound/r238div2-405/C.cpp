#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <string>
#include <set>
#include <map>
#include <list>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cstdio>
#include <cmath>
using namespace std;
int m[1010][1010];
int n, q;


struct state {
  int io;
  int oi;
  int ii;
  int oo;
};


state s[1010];

void print_s()
{
  for (int i = 0; i < n; i++) {
    printf("i = %d, %d %d %d %d\n",
	   i,s[i].ii, s[i].oi, s[i].oo, s[i].io);

  }

}

void cal() 
{
  for (int i = 0; i < n; i++) {
    s[i].ii = s[i].io = s[i].oi = s[i].oo = 0;
    for (int k = 0; k < n; k++) {
      if (m[i][k] == 1)
	if (m[k][i] == 1)
	  s[i].ii++;
	else
	  s[i].io++;
      else
	if (m[k][i] == 1)
	  s[i].oi++;
	else
	  s[i].oo++;
    }
  }
}

int main()
{
  int ans = 0;
  scanf("%d", &n);
  
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      scanf("%d", &m[i][j]);
  cal();
  
  for (int i = 0; i < n; i++) {
    ans += s[i].ii;
    printf("s[%d].ii = %d\n", i, s[i].ii);
  }
  ans = ans % 2;
  printf("ans = %d\n", ans);

  scanf("%d", &q);
  int type;
  
  while (q--) {
    scanf("%d", &type);
    if (type == 3) {
      printf("%d", ans);
    }
    else if (type == 1) {
      int row, t, ori;
      scanf("%d", &row);
      row--;
      ori = s[row].ii % 2;
//      printf("hhh %d\n", s[row].io);
      t = s[row].ii; s[row].ii = s[row].oi; s[row].oi = t;
      t = s[row].oo; s[row].oo = s[row].io; s[row].io = t;
      if (s[row].ii%2 != ori)
	ans = !ans;
      printf("row, %d\n", row);

    
    }
    else {
      int co, t, ori;
      scanf("%d", &co);
      co--;
      ori = s[co].ii % 2;
      t = s[co].ii; s[co].ii = s[co].io; s[co].io = t;
      t = s[co].oo; s[co].oo = s[co].oi; s[co].oi = t;
      if (s[co].ii%2 != ori)
	ans = !ans;
      printf("co, %d\n", co);

    
    } 
    print_s();
  }
  printf("\n");

  return 0;
}
