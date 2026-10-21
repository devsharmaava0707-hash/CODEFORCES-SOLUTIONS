#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int left=0;
    int right=0;
    int mincount=INT_MAX;
    int convert=0;
    while(right<n){
        while(right<n && right-left+1<=k){
            if(s[right]=='W') convert++;
            right++;
        }
        if(right-left+1>=k) mincount=min(convert,mincount);
        if(s[left]=='W') convert--;
        left++;
    }
    cout<<mincount<<endl;
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