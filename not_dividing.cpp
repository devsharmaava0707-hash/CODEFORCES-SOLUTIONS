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
        if(ans[i]==1) ans[i]++;
    }
    for(int i=0;i<n-1;i++){
        while(ans[i+1]%ans[i]==0) ans[i+1]++;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<endl;
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