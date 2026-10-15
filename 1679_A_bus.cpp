#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
        scanf("%lld", &n);
        if (n % 2 != 0 || n < 4) {
            puts("-1");
            continue;
        }
        long long mn = (n + 5) / 6;  // as many 6-wheel buses as possible
        long long mx = n / 4;        // as many 4-wheel buses as possible
        printf("%lld %lld\n", mn, mx);
    }
    return 0;
}