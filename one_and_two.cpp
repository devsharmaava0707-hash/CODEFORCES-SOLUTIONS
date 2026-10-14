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
    vector<int>suffix(n,0);
    int sum=0;
    for(int i=n-1;i>=0;i--){
        suffix[i]=sum;
        if(ans[i]==2) sum++;
    }
    sum=0;
    for(int i=0;i<n;i++){
        if(ans[i]==2) sum++;
        if(sum==suffix[i]){
            cout<<i+1<<endl;
            return;
        }
        
    }
    cout<<-1<<endl;
    
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