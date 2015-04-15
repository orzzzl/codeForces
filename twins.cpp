/*************************************************************************
	> File Name: twins.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Wed Apr 15 00:17:29 2015
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
    int x [105];
    cin >> n;
    int s = 0;
    for (int i = 0; i < n; i ++) {
        cin >> x [i];
        s += x [i];
    }
    int ss = 0;
    sort (x, x + n, greater<int>());

    int i = 0;
    for (;i < n; i ++) {
        ss += x[i];
        if (ss > s - ss)
            break;
    }

    cout << i + 1 << endl;
    return (0);
}
