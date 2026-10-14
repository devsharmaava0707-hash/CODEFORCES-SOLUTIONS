#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin >> n ;
    int q;
    cin>>q;
    int csum=0;
    vector<int>ans(n);
    vector<int>sum(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
        sum[i]=csum+ans[i];
        csum=csum+ans[i];
    }
    while(q!=0){
        int l,r,k;
        cin>>l>>r>>k;
        int leftsum=sum[l-1]-ans[l-1];
        int rightsum=sum[n-1]-sum[r-1];
        int totalsum=leftsum+rightsum;
        if(totalsum%2==0){
            if(k%2!=0 && (r-l+1)%2!=0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        if(totalsum%2!=0){
            if(k%2==0 || (r-l+1)%2==0) cout<<"YES"<<endl;
            else cout<<"No"<<endl;
        }
        q--;
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