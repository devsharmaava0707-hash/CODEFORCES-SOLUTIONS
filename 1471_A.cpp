#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    int sum=0;
    for(int i=0;i<n-1;i++){
        if(ans[i]%x!=0){
            ans[i+1]=ans[i]+ans[i+1];
        }
        if(ans[i]%x==0){
            sum=sum+(ans[i]/x);
        }
    }
    sum=sum+ans[n-1]/x;
    cout<<sum<<endl;
    sum=0;
    for(int i=0;i<n-1;i++){
        if(ans[i]%x==0){
            ans[i+1]=ans[i]+ans[i+1];
        }
        if(ans[i]%x!=0){
            sum=sum+(ans[i]/x)+4;
        }
    }
    sum=sum+ans[n-1]/x;
    cout<<sum<<endl;
    
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