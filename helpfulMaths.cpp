/*************************************************************************
	> File Name: helpfulMaths.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Sun Mar 22 17:45:38 2015
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
    vv v;
    int cnt = 0;
    for (int i = 0; i < s.size (); i ++)
        if (s[i] <= '9' && s[i] >= '0')
            v.push_back (s[i] - '0');
    sort (v.begin (), v.end ());
    for (int i = 0; i < s.size(); i ++)
        if (s[i] <= '9' && s[i] >= '0')
            cout << v[i - cnt];
    else    {cnt ++; cout << s[i];}
    cout << endl;
    return (0);
}
