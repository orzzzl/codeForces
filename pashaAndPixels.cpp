/*************************************************************************
	> File Name: pashaAndPixels.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Sat Mar 28 00:27:51 2015
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


int p [1005][1005];

bool check (int m, int n)
{
    for (int i = 0; i < m; i ++)
    for (int j = 0; j < n; j ++) {
        if (p[i][j] && p[i][j + 1] && p[i+1][j] && p[i + 1][j + 1])
             return 1;
    }
    return 0;
}

int main () {
    int n, m, k;
    cin >> n >> m >> k;
    int cnt (0);
    while (k --) {
        int a, b;
        cin >> a >> b;
        p[a ][b] = 1;
        cnt ++;
        if ( (p[a - 1][b - 1] && p[a - 1][b] && p[a][b - 1] && p[a][b]) ||
             (p[a - 1][b] && p[a - 1][b + 1] && p[a][b] && p[a][b + 1])  ||
             (p[a][b - 1] && p[a][b] && p[a+1][b - 1] && p[a+1][b])     || 
             (p[a+1][b] && p[a][b+1] && p[a+1][b] && p[a+1][b+1]) ) {
            cout << cnt << endl;
        return 0;
        }
    }
    cout << 0 << endl;
    return (0);
}
