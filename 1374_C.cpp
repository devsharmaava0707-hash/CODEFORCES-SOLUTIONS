#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int leftbcount=0;
    int rightbcount=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='(') leftbcount++;
        if(s[i]==')') rightbcount++;
        if(rightbcount>leftbcount){
            count++;
            rightbcount--;
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