#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void solve() {
    int n, r, b;
    cin >> n >> r >> b;
    string s;
    for (int i = 0; i <= b; i++) {
        int groups = b + 1 - i;               // groups still to fill
        int k = r / groups;
        if (r % groups != 0) k++;             // ceil(r / groups)
        s += string(k, 'R');
        r -= k;
        if (i < b) s += 'B';
    }
    cout << s << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}