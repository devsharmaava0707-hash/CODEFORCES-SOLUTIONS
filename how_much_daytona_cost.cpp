#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    int x;
    cin >> n>>x;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    for(int i=0;i<n;i++){
        if(ans[i]==x){
            cout<<"YES"<<endl;
            return ;
        }
    }
    cout<<"NO"<<endl;
    
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