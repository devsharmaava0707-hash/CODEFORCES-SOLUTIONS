#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    int p;
    cin>>p;
    vector<int>share(n);
    vector<int>cost(n);
    for(int i=0;i<n;i++){
        cin>>share[i];
    }
    for(int i=0;i<n;i++){
        cin>>cost[i];
    }
    vector<int> idx(n);

    for (int i = 0; i < n; i++) {
        idx[i] = i;
    }

    sort(idx.begin(), idx.end(), [&](int i, int j) {
        if (cost[i] != cost[j]) return cost[i] < cost[j];
        return share[i] > share[j];
    });
    if(n==1){
        cout<<p<<endl;
        return;
    }
    long long int sum=p;
    int right=1,left=0;
    while(right<n && left<n){
        if(cost[idx[left]]<p){
            sum=sum+min(1ll*(cost[idx[left]]*1ll*share[idx[left]]),1ll*cost[idx[left]]*(n-right));
            
            right=right+share[idx[left]];
            // sum=sum+min((cost[idx[left]]*share[idx[left]]),cost[idx[left]]*(n-right));
            left++;
        }
        else break;
    }
    if(right<n){
        sum=sum+1ll*(n-right)*p;
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