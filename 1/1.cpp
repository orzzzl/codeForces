/*************************************************************************
	> File Name: 1.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Sat Feb 21 21:50:58 2015
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define REP(i,s,t) for(int i=(s);i<(t);i++)
typedef long long ll;
const int INF = (int)1E9;
#define MAXN 200005
#define vv vector<int>

int main () {
    int n;
    cin >> n;
    ll a;
    cin >> a;
    ll sss = a;
    vv v;
    while (n --) {
        int aa = a % 10;
        a /= 10;
        if (aa != 0 && aa != 1)
            v.push_back(aa);
    }
      
    int mmap[8] = {0};
    REP(i, 0, v.size()) {
        if (v[i] == 2) {
            mmap [2] ++;
        }
        if (v[i] == 3) {
            mmap [3] ++;
        }
        if (v[i] == 4) {
            mmap [2] += 2;
            mmap [3] ++;
        }
        if (v[i] == 5) {
            mmap [5] ++;
        }
        if (v[i] == 6) {
            mmap [3] += 1;
            mmap [5] ++;
        }
        if (v[i] == 7) {
            mmap [7] ++;
        }
        if (v[i] == 8) {
            mmap [7] ++;
            mmap [2] += 3;
        }
        if (v[i] == 9) {
            mmap [7] ++;
            mmap [2] += 1;
            mmap [3] += 2;
        }
    }
    bool f = 1;
    for (int i = 7; i >1; i --) {
        if (mmap [i] != 0) {
            REP (j, 0, mmap [i])
                cout << i;
    }}
    cout << endl;

    return 0;
}
