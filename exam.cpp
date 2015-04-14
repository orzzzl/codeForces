/*************************************************************************
	> File Name: exam.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Tue Apr 14 00:41:44 2015
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
    int n;
    scanf ("%d", &n);
    if (n == 1) 
        printf ("%d\n%d", 1, 1);
    if (n == 2)
        printf ("%d\n%d", 1, 1);
    if (n == 3)
        printf ("%d\n%d %d", 2, 1, 3);
    if (n == 4)
        printf ("%d\n%d %d %d %d", 4, 3, 1, 4, 2);
    if (n > 4) {
        printf ("%d\n", n);
        for (int i = 1; i <= n; i += 2)
            printf ("%d ", i);
        for (int i = 2; i <= n; i += 2)
            printf ("%d ", i);
    }
    return (0);
}
