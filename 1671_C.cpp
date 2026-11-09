#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    long long int n,x;
    cin>>n>>x;
    vector<long long int>cost(n);
    for(int i=0;i<n;i++){
        cin>>cost[i];
    }
    sort(cost.begin(),cost.end());
    int i=0;
    while( i<n && x-cost[i]>=0){
        x=x-cost[i];
        i++;
    }
    i--;
    long long int total=i+1;
    long long int increase=0;
    long long int day=1;
    while(i>=0){
        increase=day*(i+1);
        while(x<increase && i>=0){
            x=x+cost[i];
            i--;
            increase=day*(i+1);
        }
        if(i<0) break;
        long long int last=x/(i+1);
        total+=(last-day+1)*(i+1);
        day=last+1;
    }
    cout<<total<<"\n";
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