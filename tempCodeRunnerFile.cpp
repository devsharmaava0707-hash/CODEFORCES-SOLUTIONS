#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n,k;
    long long int x;
    cin >> n>>k>>x;
    long long int sum=0;
    for(int i=1;i<=k;i++){
        sum+=1ll*i;
    }
    long long int sum2=0;
    for(int i=n-k-1;i<=n;i++){
        sum2+=1ll*i;
    }
     if(x>=sum && x<=sum2){
        cout<<"YES"<<endl;
        return;
     }
     cout<<"NO"<<endl;
    
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