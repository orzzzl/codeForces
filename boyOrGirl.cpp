/*************************************************************************
	> File Name: boyOrGirl.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Wed Apr 15 00:31:58 2015
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
    string s;
    cin >> s;
    map <char, int> m;
    for (int i = 0; i < s.length (); i ++)
        m [s[i]] ++;
    map <char, int> :: iterator it = m.begin ();
    int num = 0;
    for (; it != m.end (); it ++) num ++;
    
    return num % 2 ? cout << "IGNORE HIM!\n" : cout << "CHAT WITH HER!\n", 0;
}
