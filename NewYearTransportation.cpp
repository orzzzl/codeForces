/*************************************************************************
	> File Name: NewYearTransportation.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Thu Mar 12 12:40:28 2015
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


int tt[MAXN];
int main () {
    int n, t;
    cin >> n >> t;
    REP (i, 1, n) {
        cin >> tt[i];
    }
    int ttt = 1;
    while (1) {
        ttt += tt[ttt];
        if (ttt == t)
        {
            cout << "YES\n";
            return 0;
        }
        if (ttt > t)
        {
            cout << "NO\n";
            return 0;
        }
    }
    return (0);
}
