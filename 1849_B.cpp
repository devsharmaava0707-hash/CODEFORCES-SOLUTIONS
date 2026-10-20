#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    long long int k;
    cin>>k;
    vector<long long int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    vector<pair<long long int,long long int>>ansp(n);
    for(int i=0;i<n;i++){
        if(ans[i]%k==0){
            ansp[i]={-k,i};
            continue;
        }
        ansp[i]={-(ans[i]%k),i};
    }
    sort(ansp.begin(),ansp.end());
    for(int i=0;i<n;i++){
        cout<<ansp[i].second+1<<endl;
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