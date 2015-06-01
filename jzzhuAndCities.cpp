/*************************************************************************
	> File Name: jzzhuAndCities.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Sun Apr 19 00:15:05 2015
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

vector <PLL> gra [100005];
ll dis [100005];

ll shortest (ll s, ll e) {
    queue <PLL> q;
    dis [s] = 0;
    PLL ps = make_pair (s, 0);
    q.push (ps);
    while (!q.empty ()) {
        PLL tmp = q.front ();
        q.pop ();
        for (ll k = 0; k < gra [tmp.first].size (); k ++) {
            PLL tt = gra [tmp.first][k];
           // cout << "ooo" << tt.second << ",,," << tt.first << "ttt" << dis [e] << endl;
            if (dis [tt.first] > dis [tmp.first] + tt.second) {
                dis [tt.first] = dis [tmp.first] + tt.second;
                q.push (tt);
            }
        }
    }
    return dis [e];
}

int main () {
    ll n, m, k;
    cin >> n >> m >> k;
    REP (i, 0, m) {
        ll a, b, c;
        cin >> a >> b >> c;
        gra [a].push_back (make_pair (b, c));
        gra [b].push_back (make_pair (a, c));
    }

    ll cnt [100005];
    fill_n (dis, n + 5, INF);
    PLL res [100005];
    vector <PLL> vvv;
    bool shh [100005];
    fill_n (shh, n + 5, 0);
    fill_n (res, n + 5, make_pair (-1, -1));
    REP (i, 0, k) {
        ll a, b;
        cin >> a >> b;
        vvv.push_back (make_pair (a, b));
        if (res [a].first == -1) {
            ll sh = shortest (1, a);
            if (b >= sh) {
                res [a].first = sh;
                cnt [a] ++;
            }
            else {
                res [a].first = b;
                res [a].second = 0;
                shh [a] = 1;
            }
        }
        else {
            if (b < res [a].first) {
                res [a].first = a;
                res [a].second = 0;
                shh [a] = 1;
            }
            if (b == res [a].first) {
                res [a].second ++;
                shh [a] = 1;
            }
            if (b > res [a].first) {
                cnt [a] ++;
            }
        }
    }
    ll cntt = 0;
    REP (k, 0, vvv.size ()) {
        ll a = vvv [k].first;
        ll b = vvv [k].second;
        if (b > res [a].first || (b == res [a].first && shh [a] == 0))
            cntt ++;
    }
    vector <ll> fuck;
    REP (k, 0, vvv.size ()) {
        ll a = vvv [k].first;
        if (find (fuck.begin (), fuck.end (), a) == fuck.end () && res [a].second > 0)
        cntt += res [a].second;
        fuck.push_back (a);
    }
    cout << cntt << endl;
    return (0);
}
