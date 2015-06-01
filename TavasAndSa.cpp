/*************************************************************************
	> File Name: TavasAndSa.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Sat Apr 18 11:56:47 2015
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
#define REP(i,s,t) for(ll i=(s);i<(t);i++)
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;
const int INF = (int)1E9;
#define MAXN 600005
#define vv vector<int>
#define FILL(x,v) memset(x,v,sizeof(x))


int main () {
    ll lu [MAXN], cnt = 0;
    REP (len, 1, 10)
    {
        REP (m, 0, 1 << len) {
            ll x = 0;
            for (ll n = 1; n < (1 << len); n <<= 1)
            {
                x *= 10;
                x += (m & n) ? 7 : 4;
                //cout << x << endl;
            }
                lu [cnt ++] = x;
        }
    }

    sort (lu, lu + cnt);
    ll n;
    cin >> n;
    cout << (lower_bound (lu, lu + cnt, n) - lu + 1) << endl;
    return (0);
}
