#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int a,b, n;
    cin >> a>>b>>n;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    long long int sum=b;
    for(int i=0;i<n;i++){
        sum+=1ll*min(a-1,ans[i]);
    }
    cout<<sum<<endl;
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