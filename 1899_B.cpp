#include <iostream>
#include <vector>
#include <algorithm>
#include<climits>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<long long int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    vector<long long int>pref_sum(n,0);
    // pref_sum.push_back(ans[0]);
    pref_sum[0]=ans[0];
    for(int i=1;i<n;i++){
        pref_sum[i]=pref_sum[i-1]+ans[i];
    }
    long long int global_max=LLONG_MIN;
    for(int i=1;i<=n/2;i++){
        long long int maxi=LLONG_MIN;
        long long int mini=LLONG_MAX;
        if(n%i==0){
            for(int j=i-1;j<n;j=j+i){
                maxi=max(1ll*maxi,pref_sum[j]-pref_sum[j-i+1]+ans[j-i+1]);
                mini=min(1ll*mini,pref_sum[j]-pref_sum[j-i+1]+ans[j-i+1]);
            }
            global_max=max(global_max,1ll*maxi-1ll*mini);
        }
    }
    if(global_max==LLONG_MIN) global_max=0;
    cout<<global_max<<"\n";
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