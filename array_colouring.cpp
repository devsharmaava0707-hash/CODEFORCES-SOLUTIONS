#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin >> n ;
    int sum=0;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
        sum+=ans[i];
    }
    if(sum%2==0) cout<<"Yes"<<endl;
    if(sum%2!=0) cout<<"No"<<endl;
    
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