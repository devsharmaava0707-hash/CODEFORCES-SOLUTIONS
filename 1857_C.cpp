#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    long long int n_up=(n*(n-1))/2;
    vector<long long int>ans(n_up);
    for(int i=0;i<n_up;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    vector<long long int>submi;
    for(int i=0,k=0;i<ans.size();i=i+n-1-k,k++){
        submi.push_back(ans[i]);
    }
    submi.push_back(submi[submi.size()-1]); 
    for(int i=0;i<n;i++){
        cout<<submi[i]<<" ";        
    }
    cout<<"\n";
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