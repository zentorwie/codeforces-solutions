#include <cstdio>

int main()
{
    int n;
//  int rst[35000] = {0};
    scanf("%d", &n);
    int s[10] = {0};
    int a;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a == 5 || a == 7) {
            printf("-1\n");
            return 0;
        }
        s[a]++;
    }

    int r124 = s[4];
    int r126 = 0;
    int r136 = 0;
  
    // for (int i = 0; i < 10; i++) {
    //     printf("s[%d] = %d\n", i, s[i]);
    // }

    s[1] -= s[4];
    s[2] -= s[4];
  
    if (s[1] < 0 || s[2] < 0) {
        printf("-1\n");return 0;
    }
  
    if (s[6]) {
        if (s[2] + s[3] == s[1] && s[1] == s[6]) {
            r126 = s[2];
            r136 = s[3];
        }
        else {
            printf("-1\n");return 0;
        }
    }
  
    for (int i = 0; i < r124; i++)
        printf("%d %d %d\n", 1, 2, 4);
    for (int i = 0; i < r126; i++)
        printf("%d %d %d\n", 1, 2, 6);
    for (int i = 0; i < r136; i++)
        printf("%d %d %d\n", 1, 3, 6);
    
    
    if (r124 == 0 && r126 == 0 && r136 == 0)
        printf("-1\n");
  

    // for (int i = 0; i < 10; i++) {
    //     printf("s[%d] = %d\n", i, s[i]);
    // }
    return 0;
}
