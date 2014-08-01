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
    int n, c;
    int x[110];
    int max = 0;
    cin >> n >> c;
    for (int i = 0; i < n; i++) 
        cin >> x[i];
    for (int i = 0; i < n-1; i++) {
        if (x[i] - x[i+1] - c > max)
            max = x[i] - x[i+1] - c;
    }
    
    cout << max << endl;

    return 0;
}
