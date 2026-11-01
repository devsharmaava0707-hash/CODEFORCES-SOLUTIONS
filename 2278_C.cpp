#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int>ans(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>ans[i];
        sum+=ans[i];
    }
    bool done=true;
    bool done2=false;
    for(int i=0;i<n;i++){
        if(ans[i]!=1){
            done=false;
        }
        if(i!=0 && i!=n-1){
            if(ans[i]!=1) done2=true;
        }
    }
    if(done){
        cout<<-1<<"\n";
        return;
    }
    if(done2)cout<<sum-1<<"\n";
    else cout<<sum-(n-1)<<"\n";
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