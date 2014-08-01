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

double rangen()
{
    return (double)rand()/RAND_MAX;
}

int ran(int n)
{
    return (int)(rangen()*(n-1)+0.5);
}


int main()
{
    srand(time(NULL));
    int n = 25;
    cout << 25 << " " << 100 << endl;
    
    for (int i = 0; i < 100; i++) {
        int l, r, d, m, t;
        t = ran(1000)%2+1;
        do l = ran(1000000);
        while (!(l >= 1 && l <= n));
        do r = ran(1000000);
        while (!(r >= l && r <= n));
        do d = ran(1000000);
        while (!(d >= -10000 && d <= 10000));
        do m = ran(100000);
        while (!(m >= -5*10000000 && m <= 5*10000000));
        if (t == 1)
            printf("%d %d %d %d\n", t, l, r, d);
        else
            printf("%d %d %d %d\n", t, l, r, m);
    }
    return 0;
}
