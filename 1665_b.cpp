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
    int maxfreq;
    int count=1;
    int maxcount=1;
    sort(ans.begin(),ans.end());
    for(int i=0;i<n-1;i++){
        if(ans[i]==ans[i+1]) maxcount++;
        else maxcount=1;
        count=max(maxcount,count);
    }
    long long int size=count;
    long long int opr=0;
    while(size<n){
        opr++;
        long long int add=min(size,1ll*n-size);
        opr=opr+add;
        size=size+add;
    }
    cout<<opr<<endl;
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