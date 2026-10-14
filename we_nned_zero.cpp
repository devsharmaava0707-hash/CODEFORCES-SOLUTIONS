#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin >> n ;
    int zor=0;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
        zor=zor^ans[i];
    }
    if(n%2==0){
        if(zor==0)cout<<0<<endl;
        if(zor!=0) cout<<-1<<endl;
    }
    else{
        cout<<zor<<endl;
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