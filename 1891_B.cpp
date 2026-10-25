#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n,q;
    cin>>n>>q;
    vector<long long int>a(n);
    vector<long long int>que(q);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<q;i++){
        cin>>que[i];
    }
    long long int mini=que[0]+1;
    for(int i=0;i<q;i++){
        if(que[i]<mini){
            for(int j=0;j<n;j++){
                if(a[j]%(1<<(que[i]))==0) a[j]=a[j]+(1<<(que[i]-1));
            }
            mini=que[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\n";
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