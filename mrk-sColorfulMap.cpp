/*************************************************************************
    > File Name: mrk-sColorfulMap.cpp
    > Author: Zeleng Zhuang
    > Mail: zhuangzeleng19920731@gmail.com
    > Created Time: Sat Apr 18 23:03:52 2015
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

int gra [105][105][105];

int main () {
    int n, m;
    cin >> n >> m ;
    REP(i, 0, m) {
        int a, b, c;
        cin >> a >> b >> c;
        gra [a][b][c] = 1;
        gra [b][a][c] = 1;
    }
    
    REP (k, 1, m + 1)
    REP (i, 1, n + 1) {
        queue <int> q;
        q.push (i);
        vector<int> vvv;
        while (!q.empty ()) {
            int tmp = q.front ();
            q.pop ();
            vvv.push_back (tmp);
            for (int j = 1; j <= n; j++) {
                if (gra [tmp][j][k])
                {
                    if (find (vvv.begin (), vvv.end (), j) == vvv.end ())
                        q.push (j);
                    gra [i][j][k] = 1;
                    gra [j][i][k] = 1;
                }
            }
        }
    }
    int query;
    cin >> query;
    while (query --) {
        int cnt = 0;
        int x, y;
        cin >> x >> y;
        REP (k, 1, m + 1)
        if (gra [x][y][k])
            cnt ++;
        cout << cnt << endl;
    }
    return (0);
}
