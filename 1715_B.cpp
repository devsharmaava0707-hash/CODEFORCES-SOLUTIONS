#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    long long int n,k,b,s;
    cin>>n>>k>>b>>s;
    long long int max_sum=0;
    long long int min_sum=0;
    max_sum=1ll*k*b+1ll*(k-1)*n;
    min_sum=1ll*k*b;
    int count=0;
    if(s>=min_sum && s<=max_sum){
        s=s-1ll*(k*b);
        long long int sum=k*b+min(k-1ll*1,s);
        cout<<sum<<endl;
        s=s-min(k-1ll*1,s);
        count++;
        while(s>0){
            sum=min(k-1ll*1,s);
            cout<<sum<<endl;
            s=s-sum;
            count++;
        }
        while(count<n){
            cout<<0<<endl;
            count++;
        }
    }
    else{
        cout<<-1<<endl;
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