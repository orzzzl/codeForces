/*************************************************************************
	> File Name: foxAndTwoDots.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Fri Mar 13 01:13:58 2015
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
    int i,j,n,m,it,count=0;char a[50][50];
	cin>>n>>m;
	for(i=0;i<n;i++)for(j=0;j<m;j++)cin>>a[i][j];
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)if(a[i][j]!='#')
			{    it=0;
			    if(a[i][j]==a[i][j+1]) it++;
			    if(a[i][j]==a[i][j-1]) it++;
			    if(a[i][j]==a[i+1][j]) it++;
			    if(a[i][j]==a[i-1][j]) it++;
			    if(it<2)
			    {
				    a[i][j]='#';
				    i=0;
				    j=0;
			    }
			}
	for(i=0;i<n;i++)for(j=0;j<m;j++)if(a[i][j]!='#')count++;
	if(count>1)cout<<"Yes\n";
	else cout<<"No\n";
	return 0;
}
