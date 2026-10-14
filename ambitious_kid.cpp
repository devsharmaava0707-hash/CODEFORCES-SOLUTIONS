#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin >> n ;
    vector<int>ans(n);
    int sum=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>ans[i];
        sum=min(abs(ans[i]),sum);
    }
    cout<<sum<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}