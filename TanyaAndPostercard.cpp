/*************************************************************************
	> File Name: TanyaAndPostercard.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Thu Mar  5 22:27:03 2015
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define REP(i,l,q) for(int i=(l);i<(q);i++)
typedef long long ll;
const int INF = (int)1E9;
#define MAXN 200005
#define vv vector<int>


    char reverse (char r) {
        char rr;
        if ('a' <= r && 'z' >= r) {
            rr = r - 'a' + 'A'; 
        }
        if ('A' <= r && 'Z' >= r) {
            rr = r - 'A' + 'a';
        }

        return rr;
    }

int main () {
    string s;
    string t;
    cin >> s;
    cin >> t;

    int slen = s.length ();
    int tlen = t.length ();

    int y = 0, w = 0;
    map<char, int> mm;



    REP (i, 0, tlen) {
            mm [t [i]] ++;
    }

    REP (i, 0, slen) {
        if (mm [s[i]]) {
            mm [s[i]] --;
            y ++;
            s [i] = '.';

        }
    }

    REP (i, 0, slen) {
            if (mm [reverse (s[i])]) {
                mm [reverse (s[i])] --;
                w ++;
            }
    }

    cout << y << " " << w << endl;
    return 0;
}
