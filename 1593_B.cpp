#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    string s;
    cin>>s;
    int n=s.size();
    vector<string>all={"00","50","75","25"};
    int mans=n;
    for(string ans :all){
        int j=n-1;
        while(j>=0 && s[j]!=ans[1]){
            j--;
        }
        if(j<0) continue;
        int i=j-1;
        while(i>=0 && s[i]!=ans[0]){
            i--;
        }
        if(i<0) continue;
        mans=min(mans,n-i-2);
    }
    cout<<mans<<endl;
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