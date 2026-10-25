#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    long long int n,x;
    cin>>n>>x;
    vector<long long int>ans(n);
    long long int mini=LLONG_MAX;
    long long int maxi=LLONG_MIN;
    for(int i=0;i<n;i++){
        cin>>ans[i];
        mini=min(mini,ans[i]);
        maxi=max(maxi,ans[i]);
    }
    long long int left=mini;
    long long int right=x/n+maxi;
    if(x%n!=0) right++;
    long long int mid=left+(right-left)/2;
    long long int area=0;
    long long int best=left;
    while(right>=left){
        area=0;
        for(int i=0;i<n;i++){
            if(mid>ans[i]) area=area+mid-ans[i];
        }
        if(area<=x) best=max(best,mid);
        if(area==x){
            break;
        }
        else if(area<x) left=mid+1;
        else if(area>x) right=mid-1;
        mid=left+(right-left)/2;
    }
    cout<<best<<"\n";
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