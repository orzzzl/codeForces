/*************************************************************************
	> File Name: newYearPermutation.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Sat Apr 11 23:41:57 2015
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

char a[1000][1000];

int main () {
    int n;
    scanf ("%d", &n);
    int p [n];
    REP (i, 0, n)
        scanf ("%d", p + i);
    REP (i, 0, n)
        scanf ("%s", a[i]);
    bool oo = 1;
    
    for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                for(int k=0;k<n;k++)
                    if(a[j][i]=='1'&&a[i][k]=='1')a[j][k]='1';

    while (oo) {
        oo = 0;
    REP (i, 1, n + 1) {
        int j = 0;
        for (; j < n && p[j] != i; j ++);
        for (int k = 0; k < n; k ++)
            if (a[k][j] == '1' && ((p [k] > p [j] && k < j) 
                                   || (p[k] < p [j] && k > j))) {
                swap (p[k], p[j]);
                oo = 1;
                break;
        }
    }
    }
    REP (i, 0, n) cout << p [i] << " ";
    
    return (0);
}
