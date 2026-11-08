#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<long long int>a(n);
    vector<long long int>b(n);
    int k;
    cin>>k;
    int aodd=0,aeven=0,bodd=0,beven=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0) aeven++;
        else aodd++;
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(b[i]%2==0) beven++;
        else bodd++;
    }
    if(k%2==0){
        if(aeven==beven){
            cout<<"YES"<<"\n";
            return;
        }
        if(aeven>beven){
            cout<<"NO"<<"\n";
            return;
        }
            aodd=aodd-bodd;
            if(aodd+aeven>=beven){
                cout<<"YES"<<"\n";
                return;
            }
            else{
                cout<<"NO"<<"\n";
                return;
            }
        
    }
    if(k%2==1){
        if(aodd<=bodd){
            cout<<"YES"<<"\n";
            return;
        }
        else cout<<"NO"<<"\n";
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