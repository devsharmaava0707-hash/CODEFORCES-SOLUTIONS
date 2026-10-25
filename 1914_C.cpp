#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int maxib=INT_MIN;
    int maxitotal=INT_MIN;
    int suma=0;
    int valid=min(n,k);
    for(int i=0;i<valid;i++){
        maxib=max(b[i],maxib);
        suma+=a[i];
        maxitotal=max(maxitotal,suma+(maxib)*(k-i-1));
    }
    cout<<maxitotal<<endl;
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