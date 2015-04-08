/*************************************************************************
	> File Name: contest.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Wed Apr  8 11:09:15 2015
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
    int a, b, c, d;
    scanf ("%d%d%d%d", &a, &b, &c ,&d);
    int aa = max (3*a/10, a - a/250 * c);
    int bb = max (3*b/10, b - b/250 * d);
    if (aa > bb) puts ("Misha\n");
    if (aa == bb) puts ("Tie\n");
    if (aa < bb) puts ("Vasya\n");
    return (0);
}
