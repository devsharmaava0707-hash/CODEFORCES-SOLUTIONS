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
    int subs=min(count0,count1);
    if(subs%2==0) cout<<"NET"<<endl;
    else{
        cout<<"DA"<<endl;
    }
    
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