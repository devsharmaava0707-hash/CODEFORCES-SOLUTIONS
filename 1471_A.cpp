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
    long long int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+1ll*ans[i];
    }
    if(sum%x==0){
        sum=sum/x;
    }
    else{
        sum=sum/x+1;
    }
    cout<<sum<<endl;
    sum=0;
    for(int i=0;i<n;i++){
        if(ans[i]%x==0) sum=sum+1ll*ans[i]/x;
        else sum=sum+ans[i]/x+1;
    }
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