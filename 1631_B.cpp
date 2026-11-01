#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    int count=0;
    int i=n-2;
    while(i>=0){
        if(ans[i]==ans[i+1]) i--;
        else break;
    }
    if(i<0){
        cout<<0<<"\n";
        return;
    }
    while(i>=0){
        i=i-(n-i-1);
        count++;
        while(i>=0 && ans[n-1]==ans[i]) i--;
    }
    cout<<count<<"\n";
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