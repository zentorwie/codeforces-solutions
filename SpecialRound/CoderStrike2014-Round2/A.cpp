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
    int n, m, min, max, nmin = 110, nmax = -1, a;
    cin >> n >> m >> min >> max;
    
    for (int i = 0; i < m; i++) {
        cin >> a;
        if (a > nmax) nmax = a;
        if (a < nmin) nmin = a;
    }
    
    int ok;
    if (nmin < min || nmax > max)
        ok = 0;
    else if (nmin == min) {
        if (nmax == max)
            ok = 1;
        else if (n - m >= 1)
            ok = 1;
        else ok = 0;
    }
    else if (nmax == max) {
        if (nmin == min)
            ok = 1;
        else if (n - m >= 1)
            ok = 1;
        else 
            ok = 0;
    }
    else {
        if (n-m >= 2) ok = 1;
        else ok = 0;
    }
    if (ok)
        cout << "Correct" << endl;
    else 
        cout << "Incorrect" << endl;
    

    return 0;
}
