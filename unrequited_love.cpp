#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int m = n - 4;
    vector<int> v(m);
    for (int i = 0; i < m; i++) {
        v[i] = a[i] + a[i + 2] - a[i + 4];
    }   
    vector<int> sorted = v;
    sort(sorted.begin(), sorted.end());
    long long ways = 0;
    for (int i = 0; i < m;) {
        int j = i;
        while (j < m && sorted[j] == sorted[i]) j++;
        long long c = j - i;
        ways += c * (c - 1) / 2;
        i = j;
    }

    for (int i = 0; i < m; i++) {
        if (i + 2 < m && v[i] == v[i + 2]) ways--;
        if (i + 4 < m && v[i] == v[i + 4]) ways--;
    }

    cout << ways << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}