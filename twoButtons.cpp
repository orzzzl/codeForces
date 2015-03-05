/*************************************************************************
	> File Name: twoButtons.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Thu Mar  5 02:05:15 2015
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define REP(i,s,t) for(int i=(s);i<(t);i++)
typedef long long ll;
const int INF = (int)1E9;
#define MAXN 200005
#define vv vector<int>

int two (int n, int m) {
    if (m <= n)
        return n - m;
    else {
        if (m % 2 == 0)
            return two (n, m / 2) + 1;
        else
            return two (n, (m + 1) / 2) + 2;
    }
}


int main () {
    int n, m;
    cin >> n >> m;
    cout << two (n, m) << endl;
    return 0;
}
