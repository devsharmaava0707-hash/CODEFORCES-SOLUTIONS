#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>>ans(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ans[i][j];
        }
    }
    int count=0;
    int count0=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(ans[i][j]<0) count++;
            if(ans[i][j]==0) count0++;
        }
    }
    if(count%2==0 || (count%2==1 && count0>0)){
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                sum=sum+abs(ans[i][j]);
            }
        }
        cout<<sum<<endl;
    }
    else{
        int sum=0;
        int mini_negative=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                sum=sum+abs(ans[i][j]);
                mini_negative=min(mini_negative,abs(ans[i][j]));
            }
        }
        sum=sum-2*abs(mini_negative);
        cout<<sum<<endl;
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