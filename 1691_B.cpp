#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<long long int >ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    vector<pair<long long int,int>>typo;
    for(int i=0;i<n;i++){
        typo.push_back({ans[i],i});
    }
    sort(typo.begin(),typo.end());
    vector<int>temp(n);
    int left=0;
    while(left<n){
        int right=left;
        while(right<n && typo[right].first==typo[left].first) right++;
        if(right-left==1){
            cout<<-1<<endl;
            return;
        }
        for(int i=left;i<right-1;i++){
            temp[typo[i].second]=typo[i+1].second+1;
        }
        temp[typo[right-1].second]=typo[left].second+1;
        left=right;
    }
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<endl;
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