/*************************************************************************
	> File Name: Reconnaissance2.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Fri Apr 10 17:05:48 2015
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
    scanf ("%d", &n);
    int x [MAXN];
    for (int i = 1; i <= n; i ++)
        cin >> x [i];
    x [0] = x [n];
    x [n + 1] = x [1];
    int min = INF;
    for (int i = 0; i <= n; i ++)
        if (abs (x[i] - x[i + 1]) < min)
            min = abs (x[i] - x[i + 1]);
    for (int i = 1; i <= n; i ++)
        if (abs (x[i] - x[i + 1]) == min) {
            if (i == n)
                cout << n << " " << 1 << endl;
            else cout << i << " "<< i + 1 << endl;
        break;
        }
    return (0);
}
