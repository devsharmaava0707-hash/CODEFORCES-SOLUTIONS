#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n,m;
    cin>>n>>m;
    string p,q;
    cin>>p;
    cin>>q;
    if(m>n-3){
        cout<<"NO"<<"\n";
        return;
    }
    vector<int>ans(26,0);
    for(int i=0;i<n;i++){
        ans[p[i]-'a']++;
    }
    for(int i=0;i<m;i++){
        ans[q[i]-'a']--;
    }
    if(ans['s'-'a']!=1 || ans['i'-'a']!=1 || ans['x'-'a']!=1){
        cout<<"NO"<<"\n";
        return;
    }
    for(int i=0;i<26;i++){
        if(i!=18 && i!=8 && i!=23){
            if(ans[i]!=0){
                cout<<"No"<<"\n";
                return;
            }
        }
    }
    cout<<"YES"<<"\n";
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