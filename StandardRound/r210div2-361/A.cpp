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
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if (i == j) {
                cout << k << " ";
            }
            else 
                cout << 0 << " ";
        }
        if (i == n-1) 
            cout << k << endl;
        else
            cout << 0 << endl;
    }
    
    return 0;
}
