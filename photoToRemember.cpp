/*************************************************************************
	> File Name: photoToRemember.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Thu Mar 12 00:05:43 2015
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

int a[MAXN][2];
int main () {
    int n;
    cin >> n;
    int h = 0;
    int hs = 0;
    int w = 0;
    REP (i, 0, n) {
        cin >> a[i][0] >> a[i][1];
        w += a[i][0];
        if (a[i][1] < h && a[i][1] >= hs)
            hs = a[i][1];

        if (a[i][1] >= h) {
            hs = h;
            h = a[i][1];
        }
    }

    REP (i, 0, n) {
        if (a[i][1] == h)
            cout << (w - a[i][0]) * hs << " ";
        else
            cout << (w - a[i][0]) * h << " ";
    }

    cout << endl;
    return (0);
}
