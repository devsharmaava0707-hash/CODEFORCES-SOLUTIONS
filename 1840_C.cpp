#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    long long int n,q,k;
    cin>>n>>k>>q;
    vector<long long int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    int right=0,left=0;
    long long int sum=0;
    while(right<n){
        if(ans[right]>q){
            if(right-left>=k){
                long long int len=right-left;
                sum=sum+((len-k+1)*(len-k+2))/2;
            }
            left=right+1;
        }
        right++;
        
    }
    long long int len=right-left;
    if(len>=k){
        long long int x = len - k + 1;
        sum += x * (x + 1) / 2;
    }
    cout<<sum<<endl;
    
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