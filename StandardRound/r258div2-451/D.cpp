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
#include <functional>

using namespace std;

#define PQ priority_queue
#define VT vector
#define MP make_pair

typedef long long ll;



char sstr[100010], s[100010];
int  id[100010];

void pk()
{
    int i;
    int mx = 0;
    int id;
    for(i=1; i<n; i++)
    {
        if( mx > i )
            p[i] = MIN( p[2*id-i], mx-i );        
        else p[i] = 1;
        for(; str[i+p[i]] == str[i-p[i]]; p[i]++);
        if( p[i] + i > mx )
        {
            mx = p[i] + i;
            id = i;
        }
    }
}


int main()
{
    scanf("%s", sstr);
    int cnt = 0;
    if (strlen(sstr) == 1) {
        scanf("0 1\n");
        return 0;
    }
    
    int l = strlen(sstr);
    
    cnt++;
    id[0] = 0;
    s[0] = sstr[0];
    for (int i = 1; i < l; i++) {
        if (sstr[i] == sstr[i-1]) {
            id[i] = id[i-1];
        }
        else {
            id[i] = cnt;
            s[cnt++] = sstr[i];
        }
    }
    s[cnt] = 0;
    printf("%s\n", s);
    
    return 0;
}
