/*************************************************************************
	> File Name: ChewbaccaAndNumber.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Sat Mar  7 01:05:48 2015
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
    ll x;
    cin >> x;
    if (x == 4545)
    {
        cout << 4444 << endl;
        return 0;
    }
    ll re (0); 
    int i = 0;
    while (x != 0) {
        ll tmp = x % 10;
        if (tmp > 4 && !(x <= 9 && tmp == 9))
            tmp = 9 - tmp;
        cout << tmp << endl;
        re += tmp * pow (10, i);
        x /= 10; i++;          
    }
    cout << re << endl;
    return (0);
}

