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

int main()
{
  int u = 0, d = 0;
  char s[110];
  scanf("%s", s);
  
  int l = strlen(s);
  for (int i =0;  i< l ;i++) {
    if (s[i] >= 'A' && s[i] <= 'Z')
      u++;
    else {
      s[i] -= 'a'-'A';
      d++;
    }
  }

  if (u > d)
    printf("%s", s);
  else
    for (int i = 0; i < l; i++) {
      putchar(s[i] += 'a'-'A');
    }
	
  printf("\n");
  return 0;
}
