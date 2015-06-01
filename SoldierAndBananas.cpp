#include <bits/stdc++.h>
using namespace std;

int main () {
    int k, n, w;
    scanf ("%d %d %d", &k, &n, &w);
    int sum = 0;
    for (int i = 1; i <= w; i ++)
        sum += i;
    printf ("%d\n", sum * k - n > 0 ? sum * k - n : 0);
}