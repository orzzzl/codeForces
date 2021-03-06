/*************************************************************************
	> File Name: kingOfKnives.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Tue Apr  7 02:19:27 2015
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
    char x [105];
    int n;
    scanf ("%d", &n);
    scanf ("%s", x);
    for (int i = 1; i < 100; i++)
        for (int j = 0; j < 100; j ++)
    {
        if (j + 4 * i >= n) continue;
        if (x[j] == '*' && x[j + i] == '*' && x[j + 2*i] == '*' && x[j + 3*i] == '*' && x[j + 4*i] == '*')
            return printf ("yes\n"), 0;
    }
    puts ("no");
    return (0);
}
