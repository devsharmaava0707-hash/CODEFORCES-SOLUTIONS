#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    string s;
    cin>>s;
    int count0=0;
    int count1=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0') count0++;
        if(s[i]=='1') count1++;
    }
    int i=0;
    for(;i<s.size();i++){
        if(s[i]=='0'){
            if(count1==0) break;
            count1--;
        }
        else{
            if(count0==0) break;
            count0--;
        }
    }
    cout<<s.size()-i<<endl;
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