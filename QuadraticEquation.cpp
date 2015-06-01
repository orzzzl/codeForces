/*************************************************************************
	> File Name: QuadraticEquation.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Tue Apr  7 02:34:29 2015
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
    double A, B, C;
    scanf ("%lf%lf%lf", &A, &B, &C);
    double d = sqrt (B * B - 4 * A * C);
    if (!d)
        return printf ("%lf\n", -1 * B / A / 2), 0;
    else
        printf ("%lf %lf\n", (-1 * d - B) / (2 * A), (d - B) / (2 * A));
    return (0);

}
