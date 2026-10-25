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
    long long int sum=ans[0];
    long long int maxsum=ans[0];
    for(int i=1;i<n;i++){
        if(sum<0 || (abs(ans[i]%2)==abs(ans[i-1]%2))){
            // maxsum=max(sum,maxsum);
            sum=0;
        }
        sum+=ans[i];
        maxsum=max(sum,maxsum);
    }
    maxsum=max(sum,maxsum);
    cout<<maxsum<<endl;

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