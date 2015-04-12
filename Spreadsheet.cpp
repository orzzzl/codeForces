/*************************************************************************
	> File Name: Spreadsheet.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Sun Apr 12 12:48:52 2015
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
    for (scanf ("%d", &n); n --;) {
        char buf [1000];
        scanf ("%s", buf);
        int x, y;
        if (sscanf (buf, "%*c %d %*c %d", &x, &y) == 2) {
            int tt = x;
            string ttt = "";
            
            while (y > 0) {
                    
                ttt = (char) ('A' + (y - 1) % 26) + ttt;
                int t = ((y - 1) % 26);
                y -= (t + 1);
               // cout << t << endl;
                y /= 26;
            }
            cout << ttt;
            printf ("%d\n", tt);
        }
        else {
            char tmp [100];
            sscanf (buf, "%[A-Z]%d", tmp, &x);
            int lolita = 0;
            for (int j = strlen (tmp) - 1; j >= 0; j --) {
                int dd = strlen (tmp) - 1 - j;
                int aa = (tmp [j] - 'A' + 1);
                int bb = 1;
                REP (i, 0, dd) bb *= 26; 
                lolita += aa * bb;
                              //  cout << lolita << endl;
            }
            printf ("R%dC%d\n", x, lolita);
        }
    }
    return (0);
}
