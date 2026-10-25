#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n,k;
    cin>>n>>k;
    vector<long long int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    int left=0,right=n-1;
    while(k!=0){
        if(ans[left]+ans[left+1]>=ans[right]){
            break;
        }
        else{
            left=left+2;
        }
        k--;
    }
    right=right-k;
    int new_l=left-1;
    while(new_l>0){
        if(ans[new_l]+ans[new_l-1]>=ans[right]){
            right--;
            new_l=new_l-2;
        }
        else break;
    }
    left=new_l+1;
    long long int sum=0;
    for(int i=left;i<=right;i++){
        // cout<<"element  "<<ans[i]<<endl;
        sum=sum+ans[i];
        // cout<<sum<<endl;
    }
    cout<<sum<<"\n";
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