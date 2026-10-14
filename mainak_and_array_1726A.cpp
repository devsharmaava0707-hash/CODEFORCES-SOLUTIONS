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
    int point=0;
    int maxi=0;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        maxi=max(maxi,ans[i]);
        mini=min(mini,ans[i]);
    }
    int one=INT_MIN;
    if(n==1){
        cout<<0<<endl;
        return;
    }
    if(n==2){
        cout<<abs(ans[1]-ans[0])<<endl;
        return;
    }
    if(n>2){
        int one=ans[0]-ans[1];
        if(maxi==ans[0]){
            cout<<one<<endl;
            return;
        }
        else{
            cout<<max(one,maxi-ans[0])<<endl;
            return;
        }
    }
    
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