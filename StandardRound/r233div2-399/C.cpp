#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
  long long int a, b;
  
  long long int ans = 0;
  cin >> a >> b;
  if (a == 0) {
    ans = -b*b;
    cout << ans << endl;
    for (long long int i = 0; i < b; i++) 
      printf("x");
  }
  else if (b == 0) {
    ans = a*a;
    cout << ans << endl;
    for (long long int i = 0; i < a; i++) 
      printf("o");
  }
  else if (a == b) {
    long long int ev, rm;
    ev = b / 2;
    rm = b % 2;
    if (rm == 0)
      ans = a*a - (b/2)*(b/2) * 2;
    else
      ans = a*a - (b/2)*(b/2) - (b/2+1)*(b/2+1);
    cout << ans << endl;
    for (long long int i = 0; i < b/2; i++) 
      printf("x");
    for (long long int i = 0; i < a; i++) 
      printf("o");
    for (long long int i = 0; i < b/2; i++) 
      printf("x");
    if (rm)
      printf("x");
        
  }
  else if (a > b) {/*
    if (2*b*b - 2*a*b + 2*a -2*b + 1 > 0) {
      ans = (a-b+1)*(a-b+1) - 1;
      cout << ans << endl;
      for (long long int i = 0; i < a - b; i++)
	printf("o");
      for (long long int i = 0; i < 2*b; i++) {
	if (i % 2 == 0) 
	  printf("o");
	else
	  printf("x");
      }
         
    }
    else*/ {
      ans = a*a - b*b;
      cout << ans << endl;
      for (long long int i = 0; i < a; i++) printf("o");
      for (long long int i = 0; i < b; i++) printf("x");
    }
  }
  else {
    long long int ev, rm;
    long long int ans_0;
    ev = b / (a+1);
    rm = b % (a+1);
    
    for (long long int i = 0; i < rm; i++) 
      ans -= (ev+1)*(ev+1);
    
    for (long long int i = 0; i < (a+1) - rm; i++)
      ans -= ev*ev;
    ans += a;
    cout << ans << endl;
    for (long long int i = 0; i < rm; i++) {
      for (long long int j = 0; j < (ev+1); j++) 
	printf("x");
      printf("o");
    }
    for (long long int i = 0; i < (a+1) - rm - 1; i++) {
      for (long long int j = 0; j < ev; j++)
	printf("x");
      printf("o");
    }
    for (long long int j = 0; j < ev; j++)
      printf("x");
  
  }
  printf("\n");
  return 0;
}
