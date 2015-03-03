/*************************************************************************
	> File Name: Insomnia.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Sat Feb 14 01:21:23 2015
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int c = d;
    while (c > 0)
    {
        if (c % k != 0
            && c % l != 0
            && c % m != 0
            && c % n != 0)
            d --;
        c --;
    }
    cout << d;
    return 0;
}
