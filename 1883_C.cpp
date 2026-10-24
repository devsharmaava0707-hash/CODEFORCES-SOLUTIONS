#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int single = INT_MAX;
    for (int i = 0; i < n; i++)
        single = min(single, (k - a[i] % k) % k);

    if (k != 4) {
        cout << single << "\n";
        return;
    }
    int evens = 0;
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0) evens++;

    int two = INT_MAX;
    if (n >= 2) two = max(0, 2 - evens);

    cout << min(single, two) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}