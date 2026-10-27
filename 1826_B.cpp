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
    vector<long long int>pali;
    int left=0,right=n-1;
    while(left<right){
        pali.push_back(abs(ans[right]-ans[left]));
        left++;
        right--;
    }
    long long int greatest=0;
    for(int i=0;i<pali.size();i++){
        greatest=__gcd(greatest,pali[i]);
    }
    cout<<greatest<<"\n";
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