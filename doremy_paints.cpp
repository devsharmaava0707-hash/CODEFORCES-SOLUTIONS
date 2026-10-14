#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin >> n ;
    unordered_map<int,int>data;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
        data[ans[i]]++;
    }
    if(data.size()>2) cout<<"No"<<endl;
    if(data.size()==1) cout<<"Yes"<<endl;
    if(data.size()==2){
        int size1=0,size2=0;
        for( auto i:data){
            if(size1==0) size1=i.second;
            else size2=i.second;
        }
        if(n%2==0 && abs(size1-size2)==0) cout<<"Yes"<<endl;
        else if(n%2!=0 && abs(size1-size2)==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
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