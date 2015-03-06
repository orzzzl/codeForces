/*************************************************************************
	> File Name: AandBandChess.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Fri Mar  6 00:46:50 2015
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

using namespace std;

#define REP(i,s,t) for(int i=(s);i<(t);i++)
typedef long long ll;
const int INF = (int)1E9;
#define MAXN 200005
#define vv vector<int>

int main () {
    int w(0), b(0);
    
    REP (i, 0, 8) {
        string s;
        cin >> s;
        REP (j, 0, 8) {
            char t = s [j];
            if (t == 'q')
                b += 9;
            if (t == 'r')
                b += 5;
            if (t == 'b') 
                b += 3;
            if (t == 'n')
                b += 3;
            if (t == 'p')
                b += 1;
                
            if (t == 'Q')
                w += 9;
            if (t == 'R')
                w += 5;
            if (t == 'B') 
                w += 3;
            if (t == 'N')
                w += 3;
            if (t == 'P')
                w += 1;
        }
    }

    if (w == b)
        cout << "Draw" << endl;
    if (w > b)
        cout << "White" << endl;
    if (w < b)
        cout << "Black" << endl;

    return 0;
}

