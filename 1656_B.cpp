#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    long long int n,k;
    cin>>n>>k;
    vector<long long int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    int left=0,right=1;
    while(right<n){
        if(ans[right]-ans[left]==k){
            cout<<"YES"<<"\n";
            return;
        }
        else if(ans[right]-ans[left]>k){
            left++;
        }
        else if(ans[right]-ans[left]<k){
            right++;
        }
    }
    cout<<"NO"<<"\n";
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