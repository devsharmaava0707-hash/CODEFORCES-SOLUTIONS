#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin >> n ;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    bool done=true;
    for(int i=0;i<n-1;i++){
        if(ans[i]>ans[i+1]){
            done=false;
        }
    }
    int mini=INT_MAX;
    if(!done) {cout<<0<<endl;return;}
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            mini=min(mini,ans[j]-ans[i]);
        }
    }
    mini=mini/2 +1;
    cout<<mini<<endl;
    
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