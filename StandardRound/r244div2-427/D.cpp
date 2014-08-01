//#include <hash_map>
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
typedef long long ll;
#define FOR(i, b, e) for(int i = b; i < e; i++)
using namespace std;

// struct str_hash{
//         size_t operator()(const string& str) const
//         {
//                 return return __stl_hash_string(str.c_str());
//         }
//};
struct str_hash{
        size_t operator()(const string& str) const
        {
                unsigned long __h = 0;
                for (size_t i = 0 ; i < str.size() ; i ++)
                __h = 5*__h + str[i];
                return size_t(__h);
        }
};

struct compare_str{
        bool operator()(const char* p1, const char*p2) const{
                return strcmp(p1,p2)==0;
        }
};  


hash_map<string, int, str_hash> mp1;
hash_map<string, int, str_hash> mp2;

int main()
{
    string s1, s2, t;
    cin >> s1 >> s2;
    int l1 = s1.length();
    int l2 = s2.length();
    int maxl = min(l1, l2);
    
    // string test1, test2 = "abcdefg";
    // cout << test2 << endl;
    // test1 = test2.substr(0, 3);
    // cout << test1 << endl;
    // test1.erase(0, 1);
    // cout << test1 << endl;
    int ok = 0;
    for (int l = 1; l <= maxl; l++) {
        mp1.clear();
        mp2.clear();

        t = s1.substr(0, l);
        mp1[t] = 1;
        for (int i = l; i < l1; i++) {
            t.erase(0, 1);
            t = t + s1[i];


            if (mp1.count(t))
                mp1[t]++;
            else {
                mp1[t] = 1;
            }
        }

        t = s2.substr(0, l);
        mp2[t] = 1;
        for (int i = l; i < l2; i++) {
            t.erase(0, 1);
            t = t + s2[i];
            if (mp2.count(t))
                mp2[t]++;
            else {
                mp2[t] = 1;
            }
        }
        
        map<string, int>::iterator it = mp1.begin();
        while (it != mp1.end()) {
            if ((*it).second == 1 && mp2.count((*it).first)) {
                if (mp2[(*it).first] == 1) {
                    ok = l; break;
                }
            }
            it++;
        }
        if (ok != 0) break;
    }
    if (ok)
        cout << ok << endl;
    else
        cout << -1 << endl;
    
    return 0;
}
