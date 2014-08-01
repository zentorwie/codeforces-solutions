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
    int n, k;
    cin >> n >> k;
    if (k == n)
        cout << -1 << endl;
    else if (k == n-1) {
        for (int i = 1; i <= n-1; i++) {
            cout << i << " ";
        }
        cout << n << endl;
    }
    else {
        int i = 1;
        for (; i <= n-k-1; i++) { 
            cout << i+1 << " ";
        }
        if (i == n) 
            cout << 1 << endl;
        else
            cout << 1 << " ";
        for (++i; i <= n; i++) {
            if (i == n) 
                cout << i << endl;
            else
                cout << i << " ";

        }

    }
    return 0;
}
