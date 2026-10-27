#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<long long>a(n);
    vector<long long>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    long long int modulo=1000000007;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<n;i++){
        if(a[i]<=b[i]){
            cout<<0<<"\n";
            return;
        } 
    }
    int left=0;
    long long int sum=1;
    for(int i=0;i<n;i++){
        while(left<n && a[i]>b[left]){
            left++;
        }
        sum=((sum)*(left-i))%modulo;
    }
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