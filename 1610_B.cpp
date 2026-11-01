#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    int left=0,right=n-1;
    while(left<right && ans[left]==ans[right]){
        left++,right--;
    }
    if(left>=right){
        cout<<"YES"<<"\n";
        return;
    }
    int leftval=ans[left],rightval=ans[right];
    int newleft=left,newright=right;
    while(newleft<newright){
        if(ans[newleft]==ans[newright]){
            newleft++,newright--;
        }
        else{
            if(ans[newleft]==leftval) {newleft++;continue;}
            if(ans[newright]==leftval) {newright--;continue;}
            else break;
        }
    }
    if(newleft>=newright){
        cout<<"YES"<<"\n";
        return;
    }
    while(left<right){
        if(ans[left]==ans[right]){
            left++,right--;
        }
        else{
            if(ans[left]==rightval) {left++;continue;}
            if(ans[right]==rightval) {right--;continue;}
            else break;
        }
        
    }
    if(left>=right){
        cout<<"YES"<<"\n";
        return;
    }
    cout<<"NO"<<"\n";
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