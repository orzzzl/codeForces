/*************************************************************************
	> File Name: kitayuta_sGift.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Wed Mar 11 19:49:34 2015
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

bool isPalindromes (string s) {
    string a = s;
    reverse (s.begin (), s.end ());
    return a == s;
}

int main () {
    string s;
    cin >> s;
    int sl = s.length ();
    REP (i, 0, sl - 1) {
        for (char j = 'a'; j <= 'z'; j ++)
        {
            string t = s;
            t.insert (i, 1, j);
            if (isPalindromes (t))
            {
                cout << t << endl;
                return 0;
            }
        }
    }
    for (char j = 'a'; j <= 'z'; j ++)
    {
        string t = s + j;
        if (isPalindromes (t))
        {
            cout << t << endl;
            return 0;
        }
    }
    cout << "NA" << endl;
    return (0);
}
