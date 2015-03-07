/*************************************************************************
	> File Name: maximumInTable.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Sat Mar  7 00:10:17 2015
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
#define MAXN 200005
#define vv vector<int>
#define FILL(x,v) memset(x,v,sizeof(x))

int dp [20][20];

int main () {
    int n;
    cin >> n;
    REP (i, 0, n)
        REP (j, 0, n)
        { 
        if (i == 0 || j == 0)
            dp [i][j] = 1;
        else
            dp [i][j] = dp [i-1][j] + dp [i][j - 1];
        }

    cout << dp [n - 1][n - 1] << endl;
    return (0);
}
