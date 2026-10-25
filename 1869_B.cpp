#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    long long int n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<pair<long long int ,long long int>>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i].first;
        cin>>ans[i].second;
    }
    if(a<=k || b<=k){
        if(a<=k && b<=k){
            cout<<0<<"\n";
            return;
        }
        if(a<=k){
            long long int mini=LLONG_MAX;
            for(int i=0;i<k;i++){
                long long int dis=abs(ans[i].first-ans[b-1].first)+abs(ans[i].second-ans[b-1].second);
                if(mini>dis){
                    mini=dis;
                }
            }
            cout<<min(mini,abs(ans[a-1].first-ans[b-1].first)+abs(ans[a-1].second-ans[b-1].second))<<"\n";
        }
        if(b<=k){
            long long int mini=LLONG_MAX;
            for(int i=0;i<k;i++){
                long long int dis=abs(ans[i].first-ans[a-1].first)+abs(ans[i].second-ans[a-1].second);
                mini=min(dis,mini);
            }
            cout<<min(mini,abs(ans[a-1].first-ans[b-1].first)+abs(ans[a-1].second-ans[b-1].second))<<"\n";
        }
    }
    else{
        long long int mini1=LLONG_MAX;
        long long int mini2=LLONG_MAX;
        for(int i=0;i<k;i++){
         mini1=min(mini1,abs(ans[i].first-ans[a-1].first)+abs(ans[i].second-ans[a-1].second));
         mini2=min(mini2,abs(ans[i].first-ans[b-1].first)+abs(ans[i].second-ans[b-1].second));
        }
        if(k==0){
                cout<<abs(ans[a-1].first-ans[b-1].first)+abs(ans[a-1].second-ans[b-1].second)<<"\n";
                return;
            }
        cout<<min(mini1+mini2,abs(ans[a-1].first-ans[b-1].first)+abs(ans[a-1].second-ans[b-1].second))<<"\n";
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