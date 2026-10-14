#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int a,b;
    cin >> a>>b ;
    if(a<=b){
        cout<<-1<<endl;
        return;
    }
    cout<<min(a-b,b)<<endl;
    
    
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