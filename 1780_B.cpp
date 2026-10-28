#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<long long int>ans(n);
    long long int sum=0;
    vector<long long int>prefix(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
        sum=sum+ans[i];
    }
    prefix[0]=ans[0];
    for(int i=1;i<n;i++){
        prefix[i]=ans[i]+prefix[i-1];
    }
    long long int maxgcd=1;
    for(int i=0;i<n-1;i++){
        long long int gcdcurr=__gcd(prefix[i],sum-prefix[i]);
        maxgcd=max(maxgcd,gcdcurr);
    }
    cout<<maxgcd<<"\n";
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