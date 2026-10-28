#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    long long int c;
    cin>>c;
    vector<long long int>cost(n);
    for(int i=0;i<n;i++){
        cin>>cost[i];
        cost[i]=cost[i]+1ll*1+1ll*i;
    }
    sort(cost.begin(),cost.end());
    int count=0;
    for(int i=0;i<n;i++){
        if(c-cost[i]>=0){
            c=c-cost[i];
            count++;
        }
        else break;
    }
    cout<<count<<"\n";

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