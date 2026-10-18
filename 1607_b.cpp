#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    long long int a,n;
    cin>>a>>n;
    int rem=n%4;
    if(a%2!=0){
        if(rem==0) cout<<a<<endl;
        if(rem==1) cout<<a+n<<endl;
        if(rem==2) cout<<a-1<<endl;
        if(rem==3) cout<<a-n-1<<endl;
    }
    else{
        if(rem==0) cout<<a<<endl;
        if(rem==1) cout<<a-n<<endl;
        if(rem==2) cout<<a+1<<endl;
        if(rem==3) cout<<a+n+1<<endl;

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