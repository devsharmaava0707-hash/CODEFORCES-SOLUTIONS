#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    vector<int>d(n-1);
    int maxdiff=0;
    for(int i=0;i<n-1;i++){
        d[i]=abs(ans[i]-ans[i+1]);
        maxdiff=max(maxdiff,d[i]);
    }
    int count=0;
    vector<int>pos;
    for(int i=0;i<n-1;i++){
        if(d[i]==maxdiff){
            count++;
            pos.push_back(i);
        }
    }
    if(count>2){
        cout<<maxdiff<<"\n";
        return;
    }
    vector<int>pre(n+1,0), suf(n+2,0);
    for(int i=1;i<=n-1;i++) pre[i]=max(pre[i-1],d[i-1]);
    for(int i=n-2;i>=0;i--) suf[i]=max(suf[i+1],d[i]);
    vector<array<int,3>>cand;
    if(count==2){
        int l=pos[0]+1;
        int r=pos[1];
        int inside=0;
        for(int i=l;i<r;i++) inside=max(inside,d[i]);
        cand.push_back({l,r,inside});
    }
    else{
        int p=pos[0];
        int l=p+1;
        int inside=0;
        for(int r=l;r<n;r++){
            if(r>l) inside=max(inside,d[r-1]);
            cand.push_back({l,r,inside});
        }
        int r=p;
        inside=0;
        for(int i=r;i>=0;i--){
            if(i<r) inside=max(inside,d[i]);
            cand.push_back({i,r,inside});
        }
    }

    int best=maxdiff;
    for(auto &c:cand){
        int l=c[0], r=c[1];
        int cur=2*c[2];
        if(l>0){
            cur=max(cur,pre[l-1]);
            cur=max(cur,abs(ans[l-1]-2*ans[r]));
        }
        if(r<n-1){
            cur=max(cur,suf[r+1]);
            cur=max(cur,abs(2*ans[l]-ans[r+1]));
        }
        best=min(best,cur);
    }
    cout<<best<<"\n";
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