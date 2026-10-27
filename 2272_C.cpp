#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long int max_min(long long int mid,vector<long long int>&prefix,vector<long long int>&ans){
    long long int extra_find=0;
    for(int i=0;i<prefix.size();i++){
        if(prefix[i]<=mid){
            continue;
        }
        if(prefix[i]>mid) extra_find++;
        if(i+1<prefix.size() && prefix[i+1]>mid && ans[i+1]-ans[i]<=2*mid){
            i++;
        } 
    }
    return extra_find;
}
void solve() {
    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<long long int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    vector<long long int>prefix;
    long long int maxi=LLONG_MIN;
    for(int i=0;i<n;i++){
        if(i==0) prefix.push_back(ans[i+1]-ans[i]);
        else if(i==n-1) prefix.push_back(ans[i]-ans[i-1]);
        else prefix.push_back(min(ans[i+1]-ans[i],ans[i]-ans[i-1]));
        maxi=max(maxi,prefix[i]);
    }
    long long int left=1,right=maxi;
    while(left<right){
        long long int mid=left+(right-left)/2;
        long long int total_count=max_min(mid,prefix,ans);
        if(total_count<=x){
            right=mid;
        }
        else left=mid+1;
    }
    cout<<left<<"\n";
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