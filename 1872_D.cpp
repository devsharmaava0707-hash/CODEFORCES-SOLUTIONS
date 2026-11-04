#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    long long int n,x,y;
    cin>>n>>x>>y;
    long long int sum1=n/x;
    long long int sum2=n/y;
    long long int hcf=__gcd(x,y);
    long long int sum3=(n*hcf)/(x*y);
    sum1=sum1-sum3;
    sum2=sum2-sum3;
    long long sumadd=((2*n-sum1+1)*(sum1))/2;
    long long sumsub=(sum2*(sum2+1))/2;
    cout<<sumadd-sumsub<<"\n";
    
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