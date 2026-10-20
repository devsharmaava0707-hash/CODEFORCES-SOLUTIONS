#include <iostream>
#include <vector>
#include<unordered_map>
#include <algorithm>
#include<unordered_set>
using namespace std;
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,int>newchar;
    for(int i=0;i<n;i++){
        newchar[s[i]]++;
    }
    unordered_set<char>curr;
    int maxlen=0;
    for(int i=0;i<n;i++){
        curr.insert(s[i]);
        newchar[s[i]]--;
        if(newchar[s[i]]==0){
            newchar.erase(s[i]);
        }
        maxlen=max(maxlen,(int)curr.size()+(int)newchar.size());
    }
    cout<<maxlen<<endl;
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