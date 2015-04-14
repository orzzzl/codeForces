/*************************************************************************
	> File Name: b.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Tue Apr 14 12:55:56 2015
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

int po (int aa) {
    int  re = 1;
    for (int i = 0; i < aa; i ++)
        re = re * 2;
    return re;
}

int aa (int i) {
    if (i == 4) return 1;
    if (i == 7) return 2;
    int re = 0, c = 0;
    while (i) {
        int t = i % 10;
        if (t == 4)
            re += 1* po (c);
        if (t == 7)
            re += 2*po (c);
        c ++;
        i /= 10;
    }
    return re;
}

int main () {
    int n;
    cin >> n;
    int ind = 0;
    cout << aa (n) << endl;    
    return (0);
}
