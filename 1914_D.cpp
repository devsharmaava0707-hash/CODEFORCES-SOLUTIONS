#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<pair<long long int,int>>a;
    vector<pair<long long int,int>>b;
    vector<pair<long long int,int>>c;
    for(int i=0;i<n;i++){
        long long int x;
        cin>>x;
        a.push_back({x,i});
    }
    for(int i=0;i<n;i++){
        long long int x;
        cin>>x;
        b.push_back({x,i});
    }
    for(int i=0;i<n;i++){
        long long int x;
        cin>>x;
        c.push_back({x,i});
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    long long int sum=0;
    for(int i=0;i<3;i++){
        int noti=a[n-i-1].second;
        for(int j=0;j<3;j++){
            if(noti==b[n-1-j].second) continue;
            int notj=b[n-1-j].second;
            for(int k=0;k<3;k++){
                if(c[n-1-k].second==noti || c[n-1-k].second==notj) continue;
                sum=max(sum,a[n-1-i].first+b[n-1-j].first+c[n-1-k].first);
            }
        }
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