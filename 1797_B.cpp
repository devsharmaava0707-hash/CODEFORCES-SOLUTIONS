#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    long long int n,k;
    cin>>n>>k;
    vector<vector<int>>ans(n,vector<int>(n));
    int total=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>ans[i][j];
        }
    }
    if(n%2==0){
        for(int i=0;i<n/2;i++){
            for(int j=0;j<n;j++){
                if(ans[i][j]!=ans[n-i-1][n-j-1]) total++;
            }
        }
    }
    if(n%2==1){
        for(int i=0;i<(n-1)/2;i++){
            for(int j=0;j<n;j++){
                if(ans[i][j]!=ans[n-i-1][n-j-1]) total++;
            }
        }
        int mid=(n-1)/2;
        for(int i=0;i<(n-1)/2;i++){
            if(ans[mid][i]!=ans[mid][n-i-1]) total++;
        }
    }
    if(total>k){
        cout<<"NO"<<"\n";
        return;
    }
    else if(n%2==1) cout<<"YES"<<"\n";
    else{
        if((k-total)%2==0) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";  
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