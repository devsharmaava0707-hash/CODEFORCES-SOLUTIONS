#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    long long k;
    cin >> n >> k;
    vector<int>ans(n);
    vector<int>temp(n);
    for(int i=0;i<n;i++){
        cin>>temp[i];
        ans[i]=temp[i];
    }
    if(k>=2) cout<<"YES"<<endl;
    // sort(temp.begin(),temp.end());
    // if(k<=1){
    //     for(int i=0;i<n;i++){
    //         if(ans[i]!=temp[i]) cout<<"NO";
    //     }
    //     cout<<"YES";
    // }
    if(k<=1){
        for(int i=1;i<n;i++){
            if(ans[i-1]> ans[i]){ cout<<"NO"<<endl; return ;}
        }
        cout<<"Yes"<<endl;
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