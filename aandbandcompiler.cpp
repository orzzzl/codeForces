/*************************************************************************
	> File Name: aandbandcompiler.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Thu Mar  5 00:25:12 2015
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define REP(i,s,t) for(int i=(s);i<(t);i++)
typedef long long ll;
const int INF = (int)1E9;
#define MAXN 200005
#define vv vector<int>

int main () {
    int first [MAXN];
    int second [MAXN];
    int third [MAXN];
    int n;
    map<int, int> m, mm, mmm;
    cin >> n;
    REP(i, 0, n)
        cin >> first [i];
    REP(i, 0, n-1)
        cin >> second [i];
    REP(i, 0, n-2)
        cin >> third [i];
    REP(i, 0, n)
        if (m.find (first [i]) == m.end ())
            m[first [i]] = 1;
        else 
            m[first [i]] ++;
    REP(i, 0, n-1)
        if (mm.find (second [i]) == mm.end ())
            mm[second [i]] = 1;
        else 
            mm[second [i]] ++;
    REP(i, 0, n-2)
        if (mmm.find (third [i]) == mmm.end())
            mmm[third [i]] = 1;
        else  
            mmm[third [i]] ++;

    REP(i, 0, n)
        if (m[first [i]] != mm[first [i]])
    {
        cout << first [i] << endl;
        break;
    }

    REP(i, 0, n-1)
        if (mm[second [i]] != mmm[second[i]])
    {
        cout << second [i] << endl;
        break;
    }

    return 0;
}
