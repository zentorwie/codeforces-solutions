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

struct point {
    int x;
    int y;
};

vector<point> v1, v2;

long long int sq[2500];

long long int aabs(long long int x)
{
    if (x < 0) return -x;
    return x;
}

int main()
{
    long long int a, b, x, y;
    point pt;
    for (long long int i = 0; i <= 2300; i++) 
	sq[i] = i*i;
    long long int ca, cb, ga, gb;
    cin >> a >> b;

    long long int A = a*a;
    long long int B = b*b;
//    printf("a b %I64d %I64d\n", A, B);
    long long int ok = 0;
    for (x = 1; x <= 1000; x++) {
	for (y = 1; y <= 1000; y++) {
	    if (sq[x] + sq[y] == A) {
		pt.x = x;
		pt.y = y;
		v1.push_back(pt);
	    }
	    if (sq[x] + sq[y] == B) {
		pt.x = x;
		pt.y = y;
		v2.push_back(pt);
	    }
	}
    }
    for (vector<point>::iterator it1=v1.begin(); it1 != v1.end(); it1++) {
	for (vector<point>::iterator it2=v2.begin(); it2 != v2.end(); it2++) {
	    ca = (*it1).x;
	    cb = (*it1).y;
	    ga = (*it2).x;
	    gb = (*it2).y;
	    if ((cb != gb)&&(sq[aabs(ca+ga)]+sq[aabs(cb-gb)] == A + B)) {
		cout << "YES" << endl;
		cout << "0 0" << endl;
		cout << -ca << " " << cb << endl;
		cout << ga << " " << gb << endl;
		return 0;
	    }
	}
    }
    printf("NO\n");return 0;
    return 0;
}

