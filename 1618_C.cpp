#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<long long int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    long long int gcde=ans[0];
    long long int gcdo=ans[1];
    for(int i=2;i<n;i=i+2){
        gcde=__gcd(ans[i],gcde);
    }
    for(int i=3;i<n;i=i+2){
        gcdo=__gcd(ans[i],gcdo);
    }
    bool odd=true,even=true;
    for(int i=0;i<n;i++){
        if(i%2==0 && ans[i]%gcdo==0){
            odd=false;
        }
        if(i%2==1 && ans[i]%gcde==0){
            even=false;
        }
    }
    if(even){
        cout<<gcde<<"\n";
        return;
    }
    else if(odd){
        cout<<gcdo<<"\n";
        return;
    }
    else{
        cout<<0<<"\n";
        return;
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