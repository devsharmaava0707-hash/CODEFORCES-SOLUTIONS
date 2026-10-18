#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    long long int n;
    cin>>n;
    if(n<=2){
        cout<<"NO"<<endl;
        return;
    }
    if(n%2==1){
        cout<<"YES"<<endl;
        return;
    }
    while(n!=0){
        if(n%2!=0){
            cout<<"YES"<<endl;
            return;
        }
        n=n/2;
    }
    cout<<"NO"<<endl;
    
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