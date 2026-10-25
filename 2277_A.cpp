#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> ans(n);
    for (int i = 0; i < n; i++) cin >> ans[i];
    sort(ans.begin(), ans.end());

    int ret_type = 0;   
    int i = 0;          
    int avail = 0;      

    while (true) {
        bool has = false;
        while (i < n && ans[i] <= ret_type) {
            if (ans[i] == ret_type) has = true;
            avail++;
            i++;
        }
        if (!has || avail < k) break;
        avail -= k;
        ret_type++;
    }
    cout << ret_type << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}