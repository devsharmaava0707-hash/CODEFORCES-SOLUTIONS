#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    int  x;
    cin >> n >> x;
    vector<int>ans(n+1);
    ans[0]=0;
    for(int i=1;i<=n;i++){
        cin>>ans[i];
    }
    int smallest=0;
    for(int i=0;i<=n-1;i++){
        smallest=max(smallest,ans[i+1]-ans[i]);
    }
    smallest=max(smallest,2*(x-ans[n]));
    cout<<smallest<<endl;
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