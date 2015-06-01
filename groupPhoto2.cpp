/*************************************************************************
	> File Name: groupPhoto2.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Sun Mar 22 14:16:43 2015
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

int re [1005][2];

int main () {
    int n;
    cin >> n;
    REP (f, 0, n) {
        cin >> re [f][0] >> re [f][1] ; 
    }
    int sum = 0;
    int max = -1;
    REP (f, 0, n) 
        sum += re[f][1];
        
    vector <pair <int, int> > v;
    int cnt = 0;
    REP (f, 0, n)
        v.push_back (make_pair (re[f][0], re[f][1]));
    while (1) {
        sort (v.rbegin (), v.rend ());
        int n1 = v[0].first * sum;
        if (v.size() == 1 || cnt > n/2)
        {
            cout << n1 << endl;
            break;
        }
        int larger = v[1].first >= v[0].second ? v[1].first : v[0].second;
        sum = sum - v[0].second + v[0].first;
        int n2 = larger * sum;
        if (n1 <= n2) {
            for (int j = v.size ()-1; j > 0; j --) {
                if (v[j].second > v[j].first) {
                    int biger = v[j].second > v[0].first ? v[j].second : v[0].first;
                    int newn = biger * (sum - (v[j].second - v[j].first));
                    if (newn < n1) {
                        if (cnt > n/2) break;
                        cnt ++;
                        int tmp = v[j].first;
                        v[j].first = v[j].second;
                        v[j].second = tmp;
                        n1 = newn;
                        sum -= (v[j].second - v[j].first);
                    }
                }
            }
            cout << n1 << endl;
            break;
        }
        else {
            cnt ++;
            int tmp = v[0].first;
            v[0].first = v[0].second;
            v[0].second = tmp;
        }
    }
    return (0);
}
