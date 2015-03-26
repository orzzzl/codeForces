/*************************************************************************
	> File Name: antonAndCurrencyYouAllKnow.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Thu Mar 26 00:20:10 2015
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
    int a [MAXN];
    cin >> s;
    for (int k = 0; k < s.length (); k ++)
        a[k] = s[k] - '0';
    ll n = 0; 
    int i = s.length ();
    vv v;
    vv aa;
    for (int j = 0; j < i; j ++)
    {
        aa.push_back (a[j]);
        if (a[j] % 2 == 0)
            v.push_back (a[j]);
    }
    if (v.empty ())
    {
        cout << -1 << endl;
        return 0;
    }
    int x = v.size ();
    for (int j = 0; j < i; j ++) {
        if (a[j] % 2 == 0)
            x --;
        
        if ( (a[j] % 2 == 0 && a[j] < a[i - 1]) || x == 0)
        {   swap (a[j], a[i - 1]);  break;
        }}

    for (int j = 0; j < i; j ++) {
        cout << a[ j];
    }
    cout << endl;
    
    return (0);
}
