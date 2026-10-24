#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_set>
using namespace std;
void solve() {
    int n;
    cin>>n;
    unordered_set<long long int >b;
    for(int i=0;i<n;i++){
        long long int x;
        cin>>x;
        b.insert(x);
    }
    if(b.size()<n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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