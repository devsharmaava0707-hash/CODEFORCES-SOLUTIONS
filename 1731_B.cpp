#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    long long int n;
    cin>>n;
    long long int sum=0;
    long long int modulo=1000000007;
    long long int mul=2022;
    sum=sum+1ll*1;
    sum=((((n)*(n+1)%modulo)*(4*n-1))%modulo*337)%modulo;
    cout<<sum<<"\n";
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