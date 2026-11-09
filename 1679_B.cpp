#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_map>
using namespace std;
void solve() {
    long long int n,q;
    cin>>n>>q;
    long long int sum=0;
    vector<long long int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
        sum=sum+ans[i];
    }
    unordered_map<int,long long int>curr;
    bool done=false;
    long long int last=-1;
    while(q>0){
        int t;
        cin>>t;
        if(t==1){
            long long int i,x;
            cin>>i>>x;
            if(done){
                if(curr.find(i)!=curr.end()){
                    sum=sum-curr[i]+x;
                }
                else sum=sum+x-last;
                curr[i]=x;
            }
            else {sum=sum+x-ans[i-1];ans[i-1]=x;}
        }
        if(t==2){
            curr.clear();
            done=true;
            long long int x;
            cin>>x;
            last=x;
            sum=1ll*x*n;
        }
        cout<<sum<<"\n";
        q--;
    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}