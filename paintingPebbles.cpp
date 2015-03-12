/*************************************************************************
	> File Name: paintingPebbles.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Thu Mar 12 14:11:35 2015
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
    int a[MAXN], b[MAXN], c[MAXN];
    int n, k;
    cin >> n >> k;
    REP (i, 0, n)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort (a, a + n);

    
    if (a[n - 1] > a[0] + k) {
        //cout << a[n - 1] << a[0] << endl;
        cout << "NO\n";
        return 0;
    } else {
        cout << "YES\n";
        REP (j, 0, n) {
            REP (f, 0, b[j]) {
                c[f] = f % k + 1;
            }
            sort (c, c + b[j]);
            REP (f, 0, b[j])
                cout << c[f] << " ";
            cout << endl;
        }
    }
    return (0);
}
