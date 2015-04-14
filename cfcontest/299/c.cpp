/*************************************************************************
	> File Name: c.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Tue Apr 14 13:21:19 2015
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
    int a, b, n, l, t, m;
    cin >> a >> b >> n;
    while (n --) {
        cin >> l >> t >> m;
        ll k, j, s;
        if (t < a + (l - 1) * b) {cout << -1 << endl; continue;}
        s = a + (l - 1) * b;
        k = l + (t - s) / b;
        ll tmp = 2 *s +  b;
        ll jj = (sqrt (tmp * tmp + 8 * (b * t * m - s)) - tmp) / (2 * b);
        j = l + jj;
        cout << min (k, j) << endl;
    }
    return (0);
}
