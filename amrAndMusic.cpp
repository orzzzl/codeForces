/*************************************************************************
	> File Name: amrAndMusic.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Sun Mar 22 01:04:44 2015
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
    int n, k;
    int a [105];
    int b [105];
    cin >> n >> k;
    REP (i, 0, n) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort (a, a+n);
    int i;
    int sum = 0;
    for (i = 0; i < n; i ++){
        sum += a[i];
        if (sum > k) break;
    }
    cout << i << endl;
    REP (j, 0, n) {
        int* p = find (a, a+i, b[j]);
        if (p != a + i) {
            cout << 1 + j << " ";
            *p = -1;
        }
    }
    cout << endl;
    return (0);
}
