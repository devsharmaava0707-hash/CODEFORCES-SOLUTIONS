#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    char c;
    cin>>c;
    string s;
    cin>>s;
    int hara=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='g'){
            hara=i;
            break;
        }
    }
    int dismax=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='g'){
            hara=i;
        }
        if(s[i]==c){
            if(i>hara){
                dismax=max(dismax,n-i+hara);
            }
            if(i<hara){
                dismax=max(dismax,hara-i);
            }
        }
    }
    cout<<dismax<<endl;
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