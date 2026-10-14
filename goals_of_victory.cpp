#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    int sum=0;
    cin >> n ;
    vector<int>ans(n-1);
    for(int i=0;i<n-1;i++){
        cin>>ans[i];
        sum+=ans[i];
    }
    cout<<(-sum)<<endl;
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