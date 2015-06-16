#include <bits/stdc++.h>
using namespace std;

int n;
int x [2005];

int main () {
    cin >> n;
    for (int i = 0; i < n; i ++) {
	cin >> x [i];
    }
    //sort (x, x + n);
    for (int i = 0; i < n; i ++) {
        int cnt = 1;
        for (int j = 0; j < n; j ++) {
	    if (x [j] > x [i])
		cnt ++;
	}
	cout << cnt << " ";
    }
    return 0;
}

