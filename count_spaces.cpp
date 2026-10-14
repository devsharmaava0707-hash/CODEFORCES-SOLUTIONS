#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin >> n ;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    int maxi=0, count=0;
    for(int i=0;i<n;i++){
        if(ans[i]==0) count++;
        else{
            maxi=max(count,maxi);
            count=0;
        }
    }
    maxi=max(count,maxi);
    cout<<maxi<<endl;
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