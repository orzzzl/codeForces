/*************************************************************************
	> File Name: lecure.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Fri Apr 10 15:54:40 2015
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
    int n, m;
    scanf ("%d%d", &n, &m);
    map <string, string> mm;
    while (m --) {
        string a;
        string b;
        cin >> a >> b;
        if (b.length () < a.length ())
            mm [a] = b;
    }
    while (n --) {
        string aa;
        cin >> aa;
        if (mm.count (aa))
            cout << mm [aa] << " ";
        else 
            cout << aa << " ";
    }
    return (0);
}

