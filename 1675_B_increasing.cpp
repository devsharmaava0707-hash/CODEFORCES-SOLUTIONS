#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<long long int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    int count=0;
    for(int i=n-1;i>0;i--){
        if(ans[i]==0){
            cout<<-1<<endl;
            return;
        }
        while(ans[i]<=ans[i-1]){
            ans[i-1]=1ll*ans[i-1]/2;
            count++;
        }
        
    }
    cout<<count<<endl;
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