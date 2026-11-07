#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>>ans(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ans[i][j];
        }
    }
    for (int j = 0; j < m; j++) {
    vector<int> temp;

    for (int i = 0; i < n; i++) {
        temp.push_back(ans[i][j]);
    }

    sort(temp.begin(), temp.end());

    for (int i = 0; i < n; i++) {
        ans[i][j] = temp[i];
    }
    }
    long long int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int n1=2*j-n+1;
            sum=sum+1ll*(n1)*1ll*ans[j][i];
        }
    }    
    cout<<sum<<"\n";

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