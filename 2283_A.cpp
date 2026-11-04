#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int l,r;
    cin>>l>>r;
    int negsum=0;
    int possum=0;
    if((l<0 && r<0) || (l>0 && r>0)){
        cout<<abs(l-r)<<"\n";
        return;
    }
    for(int i=l;i<=0;i++){
        negsum=negsum+i;
    }
    for(int i=0;i<=r;i++){
        possum=possum+i;
    }
    int rsum=possum+negsum;
    if(rsum<=r && rsum>=l){
        cout<<0<<"\n";
        return;
    }
    cout<<abs(r+l)-1<<"\n";

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