#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<long long int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    int count=0;
    for(int i=n-1;i>=0;i--){
        if(ans[i]==ans[n-1]) count++;
        else break;
    }
    if(count>k){
        cout<<"NO"<<"\n";
        return;
    }
    else{
        cout<<"YES"<<"\n";
        for(int i=n-k;i<n;i++){
            cout<<ans[i]<<"\n";
        }
        for(int i=n-k-1;i>=0;i--){
            cout<<ans[i]<<"\n";
        }
    }
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