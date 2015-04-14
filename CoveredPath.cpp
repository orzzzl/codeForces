/*************************************************************************
	> File Name: CoveredPath.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Tue Apr 14 01:02:19 2015
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
    int v1, v2, t, d;
    scanf ("%d%d%d%d", &v1, &v2, &t, &d);
    int x [105];
    x [0] = v1;
    x [t - 1] = v2;
    for (int i = 1; i < t - 1; i ++)
        x [i] = x [i - 1] + d;


    for (int i = t - 2; i >= 1; i --) {
        if (x [i] - x [i + 1] > d)
            x [i] = x [i + 1] + d;
        else break;
    }

    int sum = 0;
    for (int i = 0; i < t; i ++)
        sum += x [i];

    printf ("%d\n", sum);
    return (0);
}
