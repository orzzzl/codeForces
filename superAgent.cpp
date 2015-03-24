/*************************************************************************
	> File Name: superAgent.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Mon Mar 23 22:17:01 2015
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

char a [3][3];
int main () {
    int i,j;
    for (i = 0; i < 3; i++)
       for (j = 0; j < 3; j++)
          cin >> a [i][j];
    for (i = 0; i < 3; i++)
       for (j = 0; j < 3; j++)
    if (a[2 - i][2 - j] != a[i][j]) {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    return (0);
}
