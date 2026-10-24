#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long int next_prime(int d){
    for(int i=d;;i++){
        bool isprime=true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                isprime=false;
                break;
            }
        }
        if(isprime){
            return i;
        }
    }
}
void solve() {
    int d;
    cin>>d;
    long long int p=next_prime(d+1);
    long long int q=next_prime(d+p);
    cout<<min(1ll*p*q,1ll*p*p*p)<<endl;
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