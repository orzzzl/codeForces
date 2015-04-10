/*************************************************************************
	> File Name: MishaAndChangingHandles.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Fri Apr 10 02:22:44 2015
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

map <string, string> m;
pair <string, string> p;
vector <pair <string, string> > v, re;

int main () {
    int n;
    int r = 0;
    scanf ("%d", &n);
    REP (i, 0, n) {
        string news;
        string olds;
        cin >> olds >> news;
        p = make_pair (olds, news);
        v.push_back (p);
        m [olds] = news;
    }

    REP (i, 0, v.size ()) {
        if (m.find (v[i].first) == m.end ())
            continue;
        string t = v[i].second;
        m.erase (v[i].first);
        string tt;
        while (m.find (t) != m.end ()) {
            tt = m[t];
            m.erase (t);
            t = tt;
        }
        r ++;
        re.push_back (make_pair (v[i].first, t));
    }

    printf ("%d\n", r);
    REP (i, 0, r) {
        cout << re[i].first << " " << re[i].second << endl;
    }
    return (0);
}
