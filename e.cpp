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
#include <cmath>

#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long
#define MOD 1000000007

using namespace std;

int a,b,n;
ll c[1000010],ic[1000010],res;

bool isgood(int t){
  while(t){
    if(t%10!=a&&t%10!=b)return false;
    t = t/10;
  }
  return true;
}

ll inv(ll t){
  ll res = 1;
  int y = MOD - 2;
  ll x = t;
  while(y > 0){
    if( y & 1== 1 ) res = res * x % MOD;
    x = x * x % MOD;
    y = y >> 1;
  }
  return res;
}


int main(){

  cin >> a >> b >> n;
  c[0] = 1;
  rep(i,1000001) c [i+1]= c[i] * (i+1) % MOD;
  rep(i,1000001) ic [i] = inv(c[i]);

  rep(i,n+1) if(isgood(i*a+(n-i)*b))res = (res+c[n]*ic[i]%MOD*ic[n-i]%MOD)%MOD;
  cout<< res <<endl;

}
