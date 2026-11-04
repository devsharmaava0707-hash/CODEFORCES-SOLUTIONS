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
    vector<long long int >pos;
    sort(ans.begin(),ans.end());
    for(int i=0;i<n;i++){
        long long int count=0;
        for(int j=i+1;j<n;j++){
            if(ans[j]%ans[i]==0) count++;
        }
        pos.push_back(count);
    }
    sort(pos.begin(),pos.end(),greater<int>());
    cout<<n-1-pos[0]<<"\n";
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