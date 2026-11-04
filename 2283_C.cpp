#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    int h=1;
    while(h*2 <= n) h*= 2;
    vector<int> d(n + 1, 0);
    int curr = 0;            
    for (int i = 1; i <= n; i++) curr^= i;
    d[h] = 1;                  
    curr^=h^(2*h);
    for (int x = h / 2; x >= 1; x /= 2) {   
        if (!(curr & (2*x))) {             
            d[x] =1;                       
            curr^=x^(2 * x);             
        }
    }

    for (int i = 1; i <= n; i++) cout << d[i] << " ";
    cout << "\n";
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