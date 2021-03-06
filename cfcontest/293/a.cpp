/*************************************************************************
	> File Name: a.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Sun Apr 12 15:23:16 2015
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
    string s, t;
    cin >> s >> t;
    for (int i = s.length () - 1; i >= 0; i --) {
        if (s[i] != 'z')
        {
            s [i] ++;
            break;
        }
        else 
            s [i] = 'a';
    }
    if (s < t)
        cout << s << endl;
    else 
    cout << "No such string\n";
    return (0);
}
