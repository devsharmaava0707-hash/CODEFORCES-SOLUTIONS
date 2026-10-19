#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_map>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    vector<int>mini(n);
    int minimum=ans[n-1];
    for(int i=n-2;i>=0;i--){
        mini[i]=minimum;
        minimum=min(minimum,ans[i]);

    }
    minimum=ans[0];
    int idx=0;
    for(int i=1;i<n-1;i++){
        if(minimum<ans[i] && mini[i]<ans[i]){
            cout<<"YES"<<endl;
            cout<<idx+1<<endl<<i+1<<endl;
            for(int j=i+1;j<n;j++){
                if(mini[i]==ans[j]){ cout<<j+1<<endl;break;}
            }
            return;
        }
        if(ans[i]<minimum){
            minimum=ans[i];
            idx=i;
        }
    }
    cout<<"NO"<<endl;
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