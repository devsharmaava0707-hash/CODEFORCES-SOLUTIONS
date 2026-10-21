#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    long long int n,x;
    cin>>n>>x;
    vector<long long int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    int count=0;
    long long int left_limit=abs(x-ans[0]);
    long long int right_limit=x+ans[0];
    for(int i=0;i<n;i++){
        long long int temp_r_limit=ans[i]+x;
        long long int temp_l_limit=abs(x-ans[i]);
        if(temp_l_limit>right_limit || temp_r_limit<left_limit){
            count++;
            left_limit=temp_l_limit;
            right_limit=temp_r_limit;
            continue;
        }
        else{
            left_limit=max(temp_l_limit,left_limit);
            right_limit=min(temp_r_limit,right_limit);
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