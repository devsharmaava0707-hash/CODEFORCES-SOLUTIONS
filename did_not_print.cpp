#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<int> select;
    vector<int> ans;
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        count++;
        if (s[i] == '3') continue;
        else if (s[i] == '1') select.push(count);
        else if (s[i] == '2') {
            if (!select.empty()) {
                select.pop();
                ans.push_back(count);
            }
        }
    }
    while (!select.empty()) {
        ans.push_back(select.top());
        select.pop();
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << "\n";
    for (int x : ans) cout << x << " ";
    cout << "\n";
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