/*************************************************************************
	> File Name: drazilAndHisHappyFriends.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Thu Mar 12 00:19:06 2015
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

int x[MAXN];
int y[MAXN];

int main () {
    int n, m;
    int xn, yn;
    cin >> n >> m;
    cin >> xn;
    REP (i, 0, xn) {
        int t;
        cin >> t;
        x[t] = 1;
    }
    cin >> yn;
    REP (i, 0, yn) {
        int t;
        cin >> t;
        y[t] = 1;
    }
    set <PII> remember;
    int turn = 0;
    while (1) {
        int tx = turn % n;
        int ty = turn % m;
        if (xn == n 
            ||
            yn == m)
        {
            cout << "YES" << endl;
            return 0;
        }
        PII tar (tx, ty);    
        if (remember.find (tar) != remember.end ())
        {
            cout << "NO\n";
            return 0;
        }
        if (x[tx] || y[ty]) {
            if (x[tx] == 0)
                xn ++;
            if (y[ty] == 0)
                yn ++;
            x[tx] = 1;
            y[ty] = 1;
        } else {
            PII tmp (tx, ty);
            remember.insert (tmp);
        } 

        turn ++;
    }

    return (0);
}
