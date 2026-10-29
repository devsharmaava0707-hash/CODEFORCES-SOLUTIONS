#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    int x;
    bool done=true;
    for(int i=0;i<n;i++){
        if(done && ans[i]!=i) {x=ans[i]; done=false; continue;}
        if(!done && ans[i]!=i) x=x&ans[i];
    }
    cout<<x<<"\n";
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