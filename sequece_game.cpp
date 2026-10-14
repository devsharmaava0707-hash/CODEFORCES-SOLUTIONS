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
    vector<int>sub;
    sub.push_back(ans[0]);
    for(int i=1;i<n;i++){
        if(ans[i]<ans[i-1]){
            sub.push_back(ans[i]);
        }
        sub.push_back(ans[i]);
    }
    cout<<sub.size()<<endl;
    for(int i=0;i<sub.size();i++){
        cout<<sub[i]<<endl;
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