/*************************************************************************
	> File Name: tavasAndKarafs.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Thu Apr 16 17:23:05 2015
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
    ll a, b, n, l, t, m;
    cin >> a >> b >> n;
    while ( n -- ) {
        cin >> l >> t >> m;
        if (t < a + (l - 1)* b) {
            cout << -1 << endl;
            continue;
        }
        ll left = l;
        ll right = 10000000;
        ll mid;
        while (left <= right) {
             mid = (left + right) / 2;
            //cout << "mid :\t" << mid << "left:\t" << left << "right: \t" << right << endl;
            ll tmp = a + (mid - 1)  * b;
            ll st = a + (l - 1) * b;
            ll tmpp = a * (mid) + b * (mid) * (mid - 1) / 2 - a * (l - 1) - b * (l - 2) * (l - 1) / 2; 
            ll stt = m * t;
            if (tmpp > stt || tmp > t) {
                right = mid - 1;
            }
            else {
                ll tmpn = a + mid * b;
                ll tmppn = a * (mid + 1) + b * (mid + 1) * (mid) / 2 - b * (l - 2) * (l - 1) / 2 - a * (l - 1);
                if (tmpn > t || tmppn > stt)
                    break;
                left = mid + 1 ;
            }
        }
        cout << mid << endl;
    }
    return (0);
}
