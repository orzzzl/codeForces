/*************************************************************************
	> File Name: IQtest.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Wed Apr 15 00:49:54 2015
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
    cin >> n;
    int x [MAXN];
    int z(0), o(0);
    REP (i, 0, n) {
        int tt;
        cin >> tt;
        x [i] = tt % 2;
        if (x [i]) o++;
        else z ++;
    }
    for (int i = 0; i < n; i ++)
    if (z > o)
    {
       if (x[i])
           cout << i + 1 << endl;
    }
    else {
        if (!x[i])
            cout << i + 1 << endl;
    }
        
    
    return (0);
}
