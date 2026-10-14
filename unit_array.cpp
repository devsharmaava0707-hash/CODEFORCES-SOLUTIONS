#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin >> n ;
    vector<int>ans(n);
    int cn=0,cp=0;
    for(int i=0;i<n;i++){
        cin>>ans[i];
        if(ans[i]<0)cn++;
        else cp++;
    }
    int count=0;
    while(cn>cp){
        cn--,cp++,count++;
    }
    if(cn%2!=0) count++;
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