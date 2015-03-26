/*************************************************************************
	> File Name: fedorAndNewGame.cpp
	> Author: Zeleng Zhuang
	> Mail: zhuangzeleng19920731@gmail.com
	> Created Time: Wed Mar 25 23:09:46 2015
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

int bi [100];

void binary (int n) {
    int i = 0;
    while (n != 0) {
        bi [i] = n % 2;
        n = n >> 1;
        i ++;
   }
} 
int army[1010];

int main () {
 int n,m,k,count,f;
    while(scanf("%d%d%d",&n,&m,&k)!=EOF){
                for(int i=1;i<=m;i++)
                    scanf("%d",&army[i]);
                scanf("%d",&army[0]);
                f=0;
        for(int i=1;i<=m;i++){
                        count=0;
                        int temp=army[0]^army[i];
            while(temp){
                                if(temp%2==1)
                                   count++;
                                temp=temp>>1;
                            
            }
                        if(count<=k)
                            f++;
                    
        }
               printf("%d\n",f);
            
            
    }
        return 0;

}

