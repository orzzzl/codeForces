/*************************************************************************
	> File Name: errorCorrectSystem.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Sun Mar 22 09:44:57 2015
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

string a, b;

int main () {
    int n;
    cin >> n;
    cin >> a;
    cin >> b;
    char tmpa, tmpb;
    int flag = 0;
    int ham = 0;
    vector <pair<char, char> > v;
    map <pair <char, char>, int> mp;
    int index1 = -1, index2 = -1;
    for (int i = 0; i < n; i ++ ) {
        if (a [i] != b [i])
        {
            ham ++;
            tmpa = a[i]; tmpb = b[i];
            pair <char, char> de = make_pair (tmpa, tmpb);
            v.push_back (de);
            mp [de] = i;
        }
    }

    for (int i = 0; i < v.size(); i ++) {
        pair <char, char> re = make_pair (v[i].second, v[i].first);
        if (mp [re])
        {
            flag = 1;
            index1 = mp[v[i]];
            index2 = mp[re];
            ham -= 2;
            break;
        }
        for (char aa = 'a'; flag == 0 && aa <= 'z'; aa ++)
        {
            if (aa != re.first)
            {
                if (mp[make_pair(aa, re.second)]) {
                    flag = 2;
                    index1 = mp [v[i]];
                    index2 = mp [make_pair(aa, re.second)];
                    //ham --;
                    break;
                }
            }
            if (aa != re.second) {
                if (mp [make_pair(re.first, aa)]) {
                    flag = 2;
                    //ham --;
                    index1 = mp [v[i]];
                    index2 = mp [make_pair(re.first, aa)];
                    break;
                }
            }
        }
    }

    if (flag == 2)
        ham --;

    if (flag)
        cout << ham << endl << index1 + 1 << " " << index2 + 1 << endl;
    else
    cout << ham << endl << -1 << " " << -1 << endl;
    return (0);
}
