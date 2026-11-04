#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_map>
using namespace std;
void solve() {
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    unordered_map<int,vector<int>>diff;
    unordered_map<int,int>pos;
    for(int i=0;i<n;i++){
        if(pos.find(ans[i])==pos.end()){
            pos[ans[i]]=0;
        }
        diff[ans[i]].push_back(i-pos[ans[i]]);
        pos[ans[i]]=i+1;
    }
    for(auto& i:diff){
        i.second.push_back(n-pos[i.first]);
    }
    int alltimemini=INT_MAX;
    for(auto& i:diff){
        int currmini;
        sort(i.second.begin(),i.second.end(),greater<int>());
        if(i.second.size()>1){
            currmini=max(i.second[1],i.second[0]/2);
        }
        else{
            currmini=i.second[0]/2;
        }
        alltimemini=min(alltimemini,currmini);
    }
    cout<<alltimemini<<"\n";
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