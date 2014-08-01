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
    int cnt1=0, cnt2=0;
    int m1[3] = {0};
    int m2[3] = {0};
    cin >> s;
    
    int n = s.length()/2;

    for (int i = 0; i < n; i++) {
        if (s[i*2] == '8')
            m1[0]++;
        else if (s[i*2] == '[')
            m1[1]++;
        else
            m1[2]++;
    }
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (s[i*2] == '8')
            m2[0]++;
        else if (s[i*2] == '[')
            m2[1]++;
        else
            m2[2]++;
    }

    if (m1[1] == m2[1]) {
        if (m1[0] > m2[0])
            printf("TEAM 1 WINS\n");
        else if (m1[0] < m2[0])
            printf("TEAM 2 WINS\n");
        else 
            printf("TIE\n");
    }
    else {
        m1[0] *= 2;
        m2[0] *= 2;
        cnt1 = m1[0] + m1[1];
        cnt2 = m2[0] + m2[1];
        if (cnt1 > cnt2)
            printf("TEAM 1 WINS\n");
        else if (cnt1 < cnt2)
            printf("TEAM 2 WINS\n");
        else 
            printf("TIE\n");
    }
//    cout << cnt1 << " " << cnt2 << endl;        

    return 0;
}
