#include <cstdio>
#include <algorithm>
#include <set>
using namespace std;
set<int> s;

int main()
{
    int n, a[110] = {0};
    int ok = 1;
    int min = 110;;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        s.insert(a[i]);
    }
    if (s.size() == 1) {
        printf("%d\n", a[0] * n);
    }
    else {
        min = s[0];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                
            }
        }

        
        return 0;
    }
