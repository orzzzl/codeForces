/*************************************************************************
	> File Name: playingWithPaper.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Sun Mar 22 00:44:22 2015
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
    ll a, b;
    cin >> a >> b;
    ll cnt = 0;
    while (1) {
        ll cc = a / b;
        cnt += cc;
        ll c = a - cc * b;
        if (c > b) {
            a = c;
        }
        if (c == b || c == 0) {
            break;
        }
        if (c < b) {
            a = b;
            b = c;
        }
    }
    cout << cnt << endl;
    return (0);
}
