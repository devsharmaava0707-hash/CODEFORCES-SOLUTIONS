#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<long long int>ans(n);
    int count=0;
    int count0=0;
    for(int i=0;i<n;i++){
        cin>>ans[i];
        if(ans[i]<0) count++;
        if(ans[i]==0) count0++;
    }
    long long int sum=0;
    if(((count%2==1) && (count0>0)) || count%2==0){
        for(int i=0;i<n;i++){
            sum=sum+abs(ans[i]);
        }
        cout<<sum<<"\n";
        return;
    }
    else{
        long long int minip=LLONG_MAX;
        long long int minin=LLONG_MAX;
        for(int i=0;i<n;i++){
            if(ans[i]<0){
                minin=min(minin,abs(ans[i]));
            }
            if(ans[i]>0){
                minip=min(minip,ans[i]);
            }
            sum=sum+abs(ans[i]);
        }
        if(minip<=minin){
            sum=sum-2*minip;
        }
        else if(minip>minin){
            sum=sum-2*minin;
        }

        cout<<sum<<"\n";
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