#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    long long int n,m;
    cin>>n>>m;
    vector<long long int>pos(m);
    for(int i=0;i<m;i++){
        cin>>pos[i];
    }
    sort(pos.begin(),pos.end());
    vector<long long int>vacant;
    for(int i=0;i<m;i++){
        if(i==m-1){
            long long int x=pos[0]-1ll*1;
            long long int y=n-pos[i];
            vacant.push_back(x+y);
        }
        else vacant.push_back(pos[i+1]-pos[i]-1);
    }
    sort(vacant.begin(),vacant.end(),greater<long long int>());
    long long int sub=0;
    long long int saved=0;
    for(int i=0;i<vacant.size();i++){
        if(vacant[i]-sub==1){
            saved++;
        }
        else saved=saved+max(vacant[i]-sub-1ll*1,1ll*0);
        sub=sub+4;
    }
    cout<<n-saved<<"\n";
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