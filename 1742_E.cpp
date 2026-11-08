#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    long long int n,q;
    cin>>n>>q;
    vector<long long int>height(n);
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    vector<pair<long long int,int>>ques;
    for(int i=0;i<q;i++){
        long long int x;
        cin>>x;
        ques.push_back({x,i});
    }
    sort(ques.begin(),ques.end());
    vector<long long int>ans(q);
    long long int sum=0;
    int k=0;
    for(int i=0;i<q;i++){
        while(k<n && (height[k]<=ques[i].first)){
            sum=sum+height[k];
            k++;
        }
        ans[ques[i].second]=sum;
    }
    for(int i=0;i<q;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
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