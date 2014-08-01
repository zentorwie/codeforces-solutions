#include <stdio.h>


int main()
{
  int n;
  double w[171][171];
  double a[171][171];
  double b[171][171];
  double avg;  
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) 
      scanf("%lf", &w[i][j]);

  for (int i = 0; i < n; i++) {
    a[i][i] = w[i][i];
    b[i][i] = 0.0;
  }
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      avg = (w[i][j]+w[j][i])/2;
      a[i][j] = a[j][i] = avg;
      b[i][j] = w[i][j] - avg;
      b[j][i] = w[j][i] - avg;
    }
  }
 
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n-1; j++) {
      printf("%.8f ", a[i][j]);
    }
    printf("%.8f\n", a[i][n-1]);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n-1; j++) {
      printf("%.8f ", b[i][j]);
    }
    printf("%.8f\n", b[i][n-1]);
  }
  return 0;
}
