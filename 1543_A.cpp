#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
using namespace std;
void solve() {
    long long int a,b;
    cin>>a>>b;
    long long int gap=abs(a-b);
    if(gap==0){
        cout<<0<<endl;
        cout<<0<<endl;
        return;
    }
    long long int rem=a%gap;
    long long int div=a/gap;
    div=1ll*(div+1)*gap;
    cout<<gap<<endl;
    cout<<min(1ll*rem,div-a)<<endl;
    
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