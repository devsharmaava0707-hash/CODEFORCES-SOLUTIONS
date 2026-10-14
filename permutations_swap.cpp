#include <iostream>
#include <vector>
#include <algorithm>
#include<numeric>
using namespace std;
void solve() {
    int n;
    cin >> n ;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    for(int i=0;i<n;i++){
        ans[i]=abs(ans[i]-i-1);
    }
    int hcf=0;
    for(int i=0;i<n;i++){
        hcf=gcd(hcf,ans[i]);
    }
    cout<<hcf<<endl;
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