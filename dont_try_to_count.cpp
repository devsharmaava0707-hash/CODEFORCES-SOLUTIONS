#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n, m;
    string x, s;
    cin >> n >> m >> x >> s;
    int ops = 0;
    while (x.size() < s.size() || x.find(s) == string::npos) {
        if (x.size() >= n + m) { // won't ever match now
            cout << -1 << "\n";
            return;
        }
        x += x;
        ops++;
    }
    cout << ops << "\n";
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