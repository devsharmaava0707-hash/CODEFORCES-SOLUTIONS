#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin >> n ;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    int right=n-1,left=0;
    while(right>=left){
        if(ans[left]!=0 && ans[right]!=0){
            break;
        }
        if(ans[right]==0){
            right--;
        }
        if(ans[left]==0){
            left++;
        }
    }
    if (left > right) { cout << 0 << endl; return; }
    if(left>=right){
        if(ans[left]!=0 || ans[right]!=0){
            cout<<1<<endl;
            return;
        }
        cout<<0<<endl;
        return;
    }
    int count=0;
    for(int i=left;i<=right;i++){
        if(ans[i]==0) count++;
    }
    if(count==0){
        cout<<1<<endl;
    }
    if(count>=1){
        cout<<2<<endl;
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