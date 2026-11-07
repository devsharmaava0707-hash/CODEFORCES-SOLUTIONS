#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<long long int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    long long int n1=0;
    long long int n2=0;
    sort(ans.begin(),ans.end());
    for(int i=n-1;i>=0;i--){
        if(n1<n2) n1=n1+(1ll*1<<ans[i]);
        else n2=n2+(1ll*1<<ans[i]);
    }
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