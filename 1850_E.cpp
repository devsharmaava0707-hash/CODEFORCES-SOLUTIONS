#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
using namespace std;
void solve() {
    long long int n,c;
    cin>>n>>c;
    vector<long long int>ans(n);
    long long area=0;
    long long int mulfactor=0;
    for(int i=0;i<n;i++){
        cin>>ans[i];
        area=area+ans[i]*ans[i];
        mulfactor+=ans[i];
    }
    long long int final_ans= (-mulfactor+sqrt(n*c-area*(n-1)))/2*(n);
    cout<<final_ans<<"\n";
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