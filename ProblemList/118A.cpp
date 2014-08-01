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
    string s;
    cin >> s;
    int l = s.length();
    for (int i = 0; i < l; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') 
            s[i] -= 'A' - 'a';
        if (s[i] == 'a' ||
            s[i] == 'o' ||
            s[i] == 'y' ||
            s[i] == 'e' ||
            s[i] == 'u' ||
            s[i] == 'i'){}
        else {
            printf(".%c", s[i]);
        }
    }
    printf("\n");    return 0;
}
