#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n,k;
    cin>>n>>k;
    vector<long long int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    vector<long long int >pref(n);
    pref[0]=ans[0];
    for(int i=1;i<n;i++){
        pref[i]=pref[i-1]+ans[i];
    }
    long long int sum_max=LLONG_MIN;
    for(int i=0;i<=k;i++){
        int second=k-i;
        int right=n-second-1;
        int left=2*i;
        long long sum=pref[right]-(left==0 ? 0:pref[left-1]);
        sum_max=max(sum_max,sum);
    }
    cout<<sum_max<<"\n";
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