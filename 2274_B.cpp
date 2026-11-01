#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
using namespace std;
void solve() {
    long long int n;
    cin>>n;
    vector<long long int>ans(n);
    long long int sum=0;
    for(int i=0;i<n;i++){
        cin>>ans[i];
        
    }
    long long int maxi=LLONG_MIN;
    for(int i=1;i<n;i++){
        long long int sumi=ans[i]+((1<<(i-1))*sum);
        long long int sumi2=ans[i]-((1<<(i-1))*sum);
        maxi=max(maxi,sumi);
        maxi=max(maxi,sumi2);
    }
    cout<<maxi<<"\n";
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