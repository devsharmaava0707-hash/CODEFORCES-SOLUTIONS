#include <iostream>
#include<unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    unordered_map<int,int>sub;
    int sum=0;
    int count=0;
    sub.insert({0,-1});
    for(int i=0;i<n;i++){
        sum=sum+ans[i];
        sub.insert({sum,i});
        if(i<k) continue;
        if(sum<k) continue;
        if(sum>=k){
            int rem=sum%k;
            for(int j=rem;j<sum;j=j+k){
                if(sub.find(j)!=sub.end() && (i-sub[j])>k){
                    count++;
                }
            }
        }
    }
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