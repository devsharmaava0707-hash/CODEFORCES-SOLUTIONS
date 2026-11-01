#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_map>
using namespace std;
void solve() {
    int n;
    cin>>n;
    int q;
    cin>>q;
    vector<int>ans(n);
    vector<int>que(q);
    unordered_map<int,int>pos;
    for(int i=0;i<n;i++){
        cin>>ans[i];
        if(pos.find(ans[i])==pos.end()) pos[ans[i]]=i;
    }
    for(int i=0;i<q;i++){
        cin>>que[i];
    }
    int add=0;
    for(int i=0;i<q;i++){
        int currpos=pos[que[i]];
        cout<<currpos+1<<"\n";
        for(auto& i:pos){
            if(i.second<currpos) i.second++; 
        }
        pos[que[i]]=0;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}