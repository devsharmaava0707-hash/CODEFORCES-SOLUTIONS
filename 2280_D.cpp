#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_set>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    long long int modulo=998244353;
    long long int sum=1;
    unordered_set<int>store;
    vector<int>one;
    vector<int>zero;
    for(int i=n-1;i>=0;i--){
        store.insert(ans[i]);
        bool done1=false,done2=false,done3=false;
        if(store.find(ans[i]+1)!=store.end()) done1=true;
        if(store.find(ans[i]+2)!=store.end()) done2=true;
        if(store.find(ans[i]+3)!=store.end()) done3=true;
        if((done1 && done2)||(done2 && done3) ||(done3 && done1)){
            one.push_back(1);
        }
        else zero.push_back(1);
    }
    for(int i=0;i<one.size();i++){
        sum=(sum*2)%modulo;
    }
    int zerosize=zero.size();
    long long int secondsum=1+zerosize+(zerosize*(zerosize-1))/2;
    sum=(sum*(secondsum))%modulo;
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