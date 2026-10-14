#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin >> n ;
    vector<int>ans(n);
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>ans[i];
        mini=min(mini,ans[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(mini==ans[i]) count++;
    }
    if(count==ans.size()){
        cout<<-1<<endl;return;
    }
    cout<<count<<endl;
    cout<<ans.size()-count<<endl;
    for(int i=0;i<count;i++){
        cout<<mini<<endl;
    }
    for(int i=0;i<ans.size();i++){
        if(ans[i]!=mini) cout<<ans[i]<<endl;
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