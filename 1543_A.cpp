#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
using namespace std;
void solve() {
    int a,b;
    cin>>a>>b;
    int gap=abs(a-b);
    if(gap==0){
        cout<<0<<endl;
        cout<<0<<endl;
        return;
    }
    int rem=a%gap;
    int div=a/gap;
    div=(div+1)*gap;
    cout<<gap<<endl;
    cout<<min(rem,div-a)<<endl;
    
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