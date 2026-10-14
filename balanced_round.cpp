#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n,k;
    cin >> n >>k ;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    int count=0;
    vector<int>gap;
    gap.push_back(0);
    for(int i=1;i<n;i++){
        if(ans[i]-ans[i-1]>k){
            gap.push_back(i);
        }
    }
    gap.push_back(n);
    for(int i=1;i<gap.size();i++){
        count=max(count,gap[i]-gap[i-1]);
    }
    cout<<n-count<<endl;
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