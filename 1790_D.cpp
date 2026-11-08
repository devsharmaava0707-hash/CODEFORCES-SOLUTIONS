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
    sort(ans.begin(),ans.end());
    long long int prev=ans[0];
    long long int sum=0;
    long long int totals=0;
    long long int prevsum=0;
    for(int i=0;i<n;i++){
        if(ans[i]==prev){
            sum++;
        }
        if(ans[i]-prev>1){
            if(prevsum<sum){
                totals=totals+sum-prevsum;
            }
            prevsum=0;
            sum=1;
            prev=ans[i];
        }
        if(ans[i]-prev==1){
            if(prevsum<sum){
                totals=totals+sum-prevsum;
            }
            prev=ans[i];
            // prevsum=max(prevsum,sum);
            prevsum=sum;
            sum=1;
        }
    }
    if(prevsum<sum){
        totals=totals+sum-prevsum;
    }
    cout<<totals<<"\n";
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