#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    long long int n;
    cin>>n;
    vector<long long int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    bool done1=false;
    bool done2=false;
    for(int i=0;i<n;i++){
        if(ans[i]%2==1) done1=true; //odd
    }
    for(int i=0;i<n;i++){
        if(ans[i]%2==0) done2=true; //even
    }
    if(done1 && done2){
        cout<<2<<"\n";
        return;
    }
    long long int curr=2;
    while(done2){
        long long int prev=ans[0]%curr;
        for(int i=1;i<n;i++){
            if(ans[i]%curr!=prev){
                done2=false;
                break;
            }
        }
        if(!done2){
            cout<<curr<<"\n";
            return;
        }
        curr=curr*2;
    }
    while(done1){
        // cout<<"enter"<<"\n";
        long long int prev=ans[0]%curr;
        for(int i=1;i<n;i++){
            if(ans[i]%curr!=prev){
                done1=false;
                break;
            }
        }
        if(!done1){
            cout<<curr<<"\n";
            return;
        }
        curr=curr*2;
    }
    // cout<<curr<<"\n";
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