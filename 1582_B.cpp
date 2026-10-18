#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int>ans(n);
    // long long int sum=0;
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    int count0=0;
    int count1=0;
    for(int i=0;i<n;i++){
        if(ans[i]==0) count0++;
        if(ans[i]==1) count1++;
    }
    if(count1==0) {cout<<0<<endl;return;}
    // int no=pow(2,count0); remember not to use pow as it gives the value which we did not want it return a double which cause problem of floating point numbers try to use always bitwise operators
    long long result = 1LL * count1 * (1LL << count0);
    cout << result << '\n';

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