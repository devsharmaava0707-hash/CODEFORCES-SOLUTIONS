#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    vector<int>pos(1001,-1);
    for(int i=0;i<n;i++){
        pos[ans[i]]=i;
    }
    int maxi=-1;
    for(int i=0;i<pos.size();i++){
        if(pos[i]==-1) continue;
        for(int j=i;j<pos.size();j++){
            if(pos[j]==-1) continue;
            if(__gcd(i,j)==1) maxi=max(maxi,pos[i]+pos[j]+2);
        }
    }
    cout<<maxi<<"\n";
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