/*************************************************************************
	> File Name: hanSoloAndLazerGun.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Thu Mar 12 01:14:22 2015
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
    vector <PII> a;
    int n;
    cin >> n;
    int x0, y0;
    cin >> x0 >> y0;
    REP (i, 0, n) {
        int tx, ty;
        cin >> tx >> ty;
        PII tmp (tx, ty);
        a.push_back (tmp);
    }
    set <double> s;
    REP (i, 0, a.size ()) {
        if (a[i].first == x0)
        {
            s.insert (INF);
            continue;
        }
        double xl = ((double) a[i].second - y0) / (a[i].first - x0);
        //cout << xl << "\t";
        s.insert (xl);
    }

    cout << s.size () << "\n";
    return (0);
}
