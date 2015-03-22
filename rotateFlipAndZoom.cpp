/*************************************************************************
	> File Name: rotateFlipAndZoom.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Sun Mar 22 11:53:40 2015
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

    int w, h;
char a[1000][1000];
char b[1000][1000];
char c[1000][1000];
char init[1000][1000];
void display (char a[1000][1000], int h, int w) {
    for (int i = 0; i < h; i ++) {
        for (int j = 0; j < w; j ++)
            cout << a[i][j];
        cout << endl;
    }
}

int main () {
    cin >> w >> h;
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
            cin >> init [i][j];
//    display (init, h, );
    for (int i = 0; i < w; i++)
        for (int j = 0; j < h; j++)
            a[i][j] = init [j][i];
   // display (a, w, h);
    for (int i = 0; i < w; i++)
        for (int j = 0; j < h; j++)
            b[i][j] = a [i][h - 1 -j];
//    LLdisplay (b, w, h);
    for (int i = 0; i < w*2; i++)
        for (int j = 0; j < h*2; j++)
            c[i][j] = a[i/2][j/2];
    display (c, 2*w, 2*h);
    return (0);
}
