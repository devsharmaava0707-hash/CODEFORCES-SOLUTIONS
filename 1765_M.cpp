#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    long long int n;
    cin>>n;
    if(n%2==0){
        cout<<n/2<<endl;
        cout<<n/2<<endl;
        return;
    }
    
    if(n%2==1){
       long long p = n;                  // default: n is prime
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) { p = i; break; }
    }
    cout << n/p << " " << n - n/p << "\n";
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