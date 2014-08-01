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
    int c1=0, c2=0;
    int a=0, b=0;
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.length() < 2 || s2.length() < 2)
        while (1);
    for (int i = 0; i < s1.length()/2; i++) {
        if (s1[i*2] == '8')
            a = 3;
        else if (s1[i*2] == '[')
            a = 2;
        else if (s1[i*2] == '(')
            a = 1;
        if (s2[i*2] == '8')
            b = 3;
        else if (s2[i*2] == '[')
            b = 2;
        else if (s2[i*2] == '(')
            b = 1;

        if (a > b)
            c1++;
        else if (a < b)
            c2++;
    }
    if (c1 > c2)
        puts("TEAM 1 WINS");
    else if (c1 < c2)
        puts("TEAM 2 WINS");
    else
        puts("TIE");
    return 0;
}
