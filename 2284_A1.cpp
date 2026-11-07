#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    int n1=n/2;
    int n2=n-n1;
    cout<<n2*n1<<"\n";
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