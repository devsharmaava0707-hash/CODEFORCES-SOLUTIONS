#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_map>
using namespace std;
void solve() {
    string s;
    cin>>s;
    unordered_map<char,int>ans;
    for(int i=0;i<s.size();i++){
        ans[s[i]]=-1;
    }
    for(int i=0;i<s.size();i++){
        if(ans[s[i]]!=-1){
            for(auto j:ans){
                if(j.first!=s[i] && j.second<=ans[s[i]]){
                    cout<<"NO"<<"\n";
                    return;
                }
            }
        }
        ans[s[i]]=i;
    }
    cout<<"YES"<<"\n";
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