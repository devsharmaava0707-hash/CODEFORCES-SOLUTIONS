#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>ans(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ans[i].first=x;
        ans[i].second=i;
    }
    int m=n-k+1;
    sort(ans.begin(),ans.begin()+m);
    sort(ans.begin()+m,ans.end());
    int count=0;
    int i=0;
    for(;i<m;i++){
        if(ans[i].first==count){
            count++;
        }
        else{
            break;
        }
    }
    if(i!=m){
        cout<<ans[m-1].second+1<<"\n"<<ans[m].second+1<<"\n";
    }
    else cout<<-1<<"\n";

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