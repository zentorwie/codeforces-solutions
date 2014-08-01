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
    string t;
    
    cin >> s >> t;

    int tab[30] = {0};
    int tab2[30] = {0};
    
    for (int i = 0; i < s.length(); i++) {
        tab[s[i]-'a']++;
    }
    for (int i = 0; i < t.length(); i++) {
        tab2[t[i]-'a']++;
    }

    bool f1 = 0, f2 = 0;

    
    if (s.length() < t.length()) {
        cout << "need tree" << endl;
    }
    else {
        if (s.length() > t.length()) {
            f1 = 1;
        }
        int prev = 0;        
        bool vis[110] = {0};

        for (int i = 0; i < t.length(); i++) {
            bool ok = 0;

            for (int j = prev; j < s.length(); j++) {
                if (t[i] == s[j] && !vis[j]) {
                    vis[j] = 1;
                    ok = 1;
                    prev = j;
                    break;
                }
            }
            if (!ok) {
                f2 = 1;
                break;
            }
        }

        for (int i = 0; i < 28; i++) {
            if (tab2[i] > tab[i]) {
                cout << "need tree" << endl;
                return 0;
            }
        }
       
        
        if (f1 && f2) cout << "both" << endl;
        else if (f1) cout << "automaton" << endl;
        else  cout << "array" << endl;
    }
    

    return 0;
}
