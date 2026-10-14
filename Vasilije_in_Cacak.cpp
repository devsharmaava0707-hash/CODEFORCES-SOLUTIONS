#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    long long int n,k;
    long long int x;
    cin >> n>>k>>x;
    long long int sum=0;
    sum=1ll*((k)*(k+1))/2;
    long long int sum2=0;
    sum2=1ll*((k)*(2*n+1-k))/2;
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