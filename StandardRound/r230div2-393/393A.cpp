#include <stdio.h>
#include <string.h>


int main()
{
  char s[110];
  int ans = 0;
  scanf("%s", s);
  int l = strlen(s);

  int wn=0, wi=0, we=0, wt=0;
  
  for (int i = 0; i < l ; i++) {
    switch (s[i]) 
    {
    case 'n':
      wn++;
      break;
    case 'i':
      wi++;
      break;
    case 'e':
      we++;
      break;
    case 't':
      wt++;
      break;
    default:
      break;
    }
  }

  while (1) {

    if (ans == 0) {
      if (wn >= 3 && wi >= 1 && we >= 3 && wt >=1) {
	ans++;
	wn-=3;
	wi--;
	we-=3;
	wt--;
      }
      else
	break;
    }
    else {
      if (wn >= 2 && wi >= 1 && we >= 3 && wt >=1) {
	ans++;
	wn-=2;
	wi--;
	we-=3;
	wt--;
      }
      else
	break;
    }
  }
  printf("%d\n", ans);
  

}
