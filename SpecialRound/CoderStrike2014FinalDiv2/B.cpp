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

int ism(char ch)
{
    switch(ch) {
    case 'A':
    case 'H':
    case 'I':
    case 'M':
    case 'O':
    case 'T':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
        return 1;
    default:
        return 0;
        break;
        
    }
}


int main()
{
    string s;
    cin >> s;
    int l = s.length();
    
    int end = l/2;

    int ok = 1;
    if (l == 1) {
        if (!ism(s[0])) ok = 0;
    }
    else {
        for (int i = 0; i < end; i++) {
            if (s[i] != s[l-1-i] || !ism(s[i])) {
                ok = 0;
                break;
            }
        }
    
    }

    if (ok)
        printf("YES\n");
    else
        printf("NO\n");
    
    return 0;
}
