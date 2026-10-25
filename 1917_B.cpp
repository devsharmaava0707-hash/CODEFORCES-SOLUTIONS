#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_set>
using namespace std;
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_set<char>ans;
    int count=0;
    for(int i=0;i<n && ans.size()<26;i++){
        if(ans.find(s[i])==ans.end()){
            ans.insert(s[i]);
            count+=n-i;
        }
    }
    cout<<count<<endl;
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