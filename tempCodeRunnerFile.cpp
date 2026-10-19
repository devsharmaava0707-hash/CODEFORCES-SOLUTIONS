#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>ans(n*k);
    for(int i=0;i<n*k;i++){
        cin>>ans[i];
    }
    int mid=-1;
    if(n%2==0){mid=n/2;}
    if(n%2==1){mid=n/2+1;}
    int left=0,right=n*k-1;
    long long int medianSum=0;
    if(n*k==1){
        cout<<ans[0]<<endl;
        return;
    }
    for(int i=0;i<k;i++){
        right=right-(n-mid);
        medianSum+=1ll*ans[right];
    }
    cout<<medianSum<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}