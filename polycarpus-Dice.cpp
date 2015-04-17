/*************************************************************************
	> File Name: polycarpus-Dice.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Fri Apr 17 15:16:44 2015
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
#define MAXN 1000005
#define vv vector<int>
#define FILL(x,v) memset(x,v,sizeof(x))

ll d [MAXN];
int main () {
    ll n, a;
    cin >> n >> a;
    ll sum = 0;
    REP (i, 1, n + 1) {
        scanf ("%I64d", d + i);
        sum += d [i];
    }
    REP (i, 1, n + 1) {
        ll h = sum - d [i];
        ll l = n - 1;
        ll cl = a - d [i];
        ll ch = a - 1;
        ll res = 0;
        if (a > h + 1)
            res += a - h - 1;
        if (a - d [i] < l)
            res += l + d [i] - a;
        cout << res << " ";
    }

    return (0);
}
