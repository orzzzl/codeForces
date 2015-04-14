/*************************************************************************
	> File Name: a.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Tue Apr 14 12:30:08 2015
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
    int s;
    cin >> s;
    int a = s % 10;
    s /= 10;
    int b = s % 10;
    if (b != 0) {
        if (b == 1 && a == 0) { cout << "ten" << endl; return 0;}
        if (b == 1 && a == 1) { cout << "eleven" << endl; return 0;}
        if (b == 1 && a == 2) { cout << "twelve" << endl; return 0;}
        if (b == 1 && a == 3) { cout << "thirteen" << endl; return 0;}
        if (b == 1 && a == 4) { cout << "fourteen" << endl; return 0;}
        if (b == 1 && a == 5) { cout << "fifteen" << endl; return 0;}
        if (b == 1 && a == 6) { cout << "sixteen" << endl; return 0;}
        if (b == 1 && a == 7) { cout << "seventeen" << endl; return 0;}
        if (b == 1 && a == 8) { cout << "eighteen" << endl; return 0;}
        if (b == 1 && a == 9) { cout << "nineteen" << endl; return 0;}
        if (b == 2 && a == 0) { cout << "twenty" << endl; return 0;}
        if (b == 3 && a == 0) { cout << "thirty" << endl; return 0;}
        if (b == 4 && a == 0) { cout << "forty" << endl; return 0;}
        if (b == 5 && a == 0) { cout << "fifty" << endl; return 0;}
        if (b == 6 && a == 0) { cout << "sixty" << endl; return 0;}
        if (b == 7 && a == 0) { cout << "seventy" << endl; return 0;}
        if (b == 8 && a == 0) { cout << "eighty" << endl; return 0;}
        if (b == 9 && a == 0) { cout << "ninety" << endl; return 0;}
        if (b == 2 && a > 0) { cout << "twenty" << '-';}
        if (b == 3 && a > 0) { cout << "thirty" << '-';}
        if (b == 4 && a > 0) { cout << "forty" << '-';}
        if (b == 5 && a > 0) { cout << "fifty" << '-';}
        if (b == 6 && a > 0) { cout << "sixty" << '-';}
        if (b == 7 && a > 0) { cout << "seventy" << '-';}
        if (b == 8 && a > 0) { cout << "eighty" << '-';}
        if (b == 9 && a > 0) { cout << "ninety" << '-';}

    }
        if (a == 0) cout << "zero" << endl;    
        if (a == 1) cout << "one" << endl;    
        if (a == 2) cout << "two" << endl;    
        if (a == 3) cout << "three" << endl;    
        if (a == 4) cout << "four" << endl;    
        if (a == 5) cout << "five" << endl;    
        if (a == 6) cout << "six" << endl;    
        if (a == 7) cout << "seven" << endl;    
        if (a == 8) cout << "eight" << endl;    
        if (a == 9) cout << "nine" << endl;    
    return (0);
}
