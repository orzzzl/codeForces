/*************************************************************************
	> File Name: stringInsideOut.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Fri Apr 17 14:38:20 2015
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
    string s; 
    cin >> s;
    string a = s;
    ll n = s.length ();
    for (ll i = 0; i < n / 2; i ++)
        a [i] = s [n / 2 - i - 1];
    for (ll i = n / 2; i < n; i ++)
        a [i] = s [n / 2 + n - 1 - i];
    
    cout << a << endl;
    return (0);
}
