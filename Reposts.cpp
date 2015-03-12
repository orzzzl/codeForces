/*************************************************************************
	> File Name: Reposts.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Wed Mar 11 14:39:54 2015
 ************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <sstream>
#include <complex>
#include <ctime>
#include <cassert>
#include <functional>
#include <algorithm>
using namespace std;

typedef long long ll;
#define REP(i,s,t) for(int i=(s);i<(t);i++)
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;
const int INF = (int)1E9;
#define MAXN 600005
#define vv vector<int>
#define FILL(x,v) memset(x,v,sizeof(x))


int main () {
    int n;
    cin >> n;
    map <string, int> m;

    REP (i, 0, n) {
        string s, f, l;
        cin >> f >> s >> l;
        transform (f.begin(), f.end (), f.begin (), ::tolower);
        transform (l.begin(), l.end (), l.begin (), ::tolower);
        
        if (l == "polycarp") {
            m[l] = 1;
        }

        if (m[l] + 1 > m[f])
            m[f] = m[l] + 1;
    }
    int cmax = 0;
    map<string, int> :: iterator ite = m.begin ();
    for (; ite != m.end (); ite ++)
        if (ite -> second > cmax)
            cmax = ite -> second;

    cout << cmax << endl;
    return (0);
}

