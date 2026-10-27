#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    string s;
    cin>>s;
    int n=s.size();
    int count=0;
    int maxcount=0;
    int first_one=0;
    int last_one=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1') count++;
        if(s[i]=='0'){
            maxcount=max(maxcount,count);
            count=0;
        }
    }
    maxcount=max(maxcount,count);
    for(int i=0;i<n;i++){
        if(s[i]=='1') first_one++;
        else break;
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1') last_one++;
        else break;
    }
    maxcount=max(maxcount,min(n,first_one+last_one));
    if(maxcount==n){
        cout<<1ll*n*n<<"\n";
        return;
    }
    int length=(maxcount+1)/2;
    int height=1+maxcount-length;
    long long int area=((1ll*height)*(1ll*length));
    cout<<area<<"\n";
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