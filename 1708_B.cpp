#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    long long int n,r,l;
    cin>>n>>l>>r;
    if(n<=(r-l+1)){
        cout<<"YES"<<"\n";
        for(int i=1;i<=n;i++){
            if(l%i==0) cout<<l<<"\n";
            else{
                long long int quo=l/i;
                cout<<(quo+1)*i<<"\n";
            }
        }
    }
    vector<long long int>ans;
    if(n>(r-l+1)){
        for(int i=n;i>0;i--){
            if(l%i==0){
                ans.push_back(l);
            }
            else{
                long long int quo=l/i;
                if((quo+1)*i<=r) ans.push_back((quo+1)*i);
                else{ cout<<"NO"<<"\n"; return;}
            }
        }
        cout<<"YES"<<"\n";
        for(int i=ans.size()-1;i>=0;i--){
            cout<<ans[i]<<"\n";
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