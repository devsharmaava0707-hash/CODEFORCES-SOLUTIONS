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
    if(n==1){
        cout<<0<<"\n";
        return;
    }
    int left=0,right=n-1;
    long long int sum=0;
    long long int suml=ans[0];
    long long int sumr=ans[n-1];
    while(left<right){
        if(suml==sumr){
            sum=left+1+n-right;
            left++;
            if(left>=right) break;
            else suml=suml+ans[left];
        }
        else if(suml>sumr){
            if(left<right-1) sumr=sumr+ans[right-1];
            right--;
        }
        else if(sumr>suml){
            if(left+1<right) suml=suml+ans[left+1];
            left++;
        }
    }
    // if(left<right && sumr==suml) sum=left+1+n-right;
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