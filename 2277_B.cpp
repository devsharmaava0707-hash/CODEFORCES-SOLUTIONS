#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int>ans(n);
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>ans[i];
        mini=min(mini,ans[i]);
    }
    if(mini<=n-1) cout<<n<<endl;
    else cout<<0<<endl;
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