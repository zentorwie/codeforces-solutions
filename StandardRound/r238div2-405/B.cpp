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
  int n;
  scanf("%d", &n);
  char s[3010];
  char ch = '0';
  scanf("%s", s);
  int l = strlen(s);
  int cnt = 0;
  int ans = 0;
  char flag = 0;
  int i = 0;

  for (int i = 0; i < l ;i++) {
    if (s[i] == 'L') 
      for (int j = i; j >= 0; j--)
	s[j] = 'x';
    else if (s[i] == 'R')
      for (int j = i; j < l; j++) {
	if (s[j] == 'L') {
	  s[j] = 'x'; 	
	  if ((j - i) % 2 == 0)
	    ans++;
	  break;
	}
	s[j] = 'x';

      }
    
  }
  for (int i = 0; i < l ; i++)
    if (s[i] == '.')
      ans++;
  
    
  printf("%d\n", ans);
  
  return 0;
}
