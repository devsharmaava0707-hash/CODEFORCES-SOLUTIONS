#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;
const ll MOD = 998244353;
const ll INF = (ll)4e18;

ll A[64], C[64], pre[64], best;

// A[m]   = 2^m - 2      : points a group of m '+' presses gives toward need
// C[m]   = 2^m + m - 1  : cost of using that group
// pre[m] = A[2] + ... + A[m]
// Pick distinct sizes m in 2..61 with total A >= need, minimising total C.
void dfs(int m, ll need, ll cur) {
    if (cur + need >= best) return;      // cannot beat the best answer so far
    if (m < 2 || pre[m] < need) return;  // even taking all remaining sizes is not enough
    if (A[m] >= need) best = min(best, cur + C[m]);   // take m, finished
    else dfs(m - 1, need - A[m], cur + C[m]);         // take m, still need more
    dfs(m - 1, need, cur);                            // skip m
}

ll f(ll n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    best = INF;
    dfs(61, n - 1, 0);   // need = n - 1
    return best - n;     // presses = (sum of C) - n
}

void solve() {
    ll l, r;
    cin >> l >> r;
    ll ans = 0;
    for (ll n = l; n <= r; n++) ans = (ans + f(n) % MOD) % MOD;
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int m = 2; m <= 61; m++) {
        A[m] = (1LL << m) - 2;
        C[m] = (1LL << m) + m - 1;
        pre[m] = pre[m - 1] + A[m];
    }

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}