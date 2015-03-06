/*************************************************************************
	> File Name: pangram.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Wed Mar  4 01:20:22 2015
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
    map <char, int> m;
    int cnt = 0;
    cin >> n;
    while (n --) {
        char tmp = getchar ();
        if ('a' <= tmp) tmp -= ('a' - 'A');
        if (m.find (tmp) == m.end ())
        {
            cnt ++;
            m [tmp] = 1;
        }
    }
    cout << (cnt >= 26? "YES":"NO")<< endl;
    return 0;
}
