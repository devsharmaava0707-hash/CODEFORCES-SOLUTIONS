#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    long long int n;
    cin >> n ;
    int count=0;
    int i=1;
    while(n%i==0){
        count++;
        i++;
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