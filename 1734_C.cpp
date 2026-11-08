#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    long long int cost=0;
    for(int i=1;i<=n;i++){
        int k=1;
        while(i*k<=n){
            if(s[i*k-1]!='0' && s[i*k-1]!='2') break;
            if(s[i*k-1]=='0'){
                cost=cost+1ll*i;
                s[i*k-1]='2';
            }
            k++;
        }
    }
    cout<<cost<<"\n";
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