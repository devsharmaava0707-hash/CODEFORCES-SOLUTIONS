#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<long long int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    vector<pair<long long int ,int>>pos_vec;
    for(int i=0;i<n;i++){
        pos_vec.push_back({ans[i],i});
    }
    sort(pos_vec.begin(),pos_vec.end());
    long long int sum=pos_vec[0].first;
    vector<int>pos;
    for(int i=1;i<n;i++){
        if(sum<pos_vec[i].first) pos.push_back(i);
        sum+=pos_vec[i].first;
    }
    int left=0;
    vector<int>final_ans(n);
    for(int i=0;i<n;i++){
        if(left>=pos.size()){
            final_ans[pos_vec[i].second]=n-1;
            continue;
        }
        if( left<pos.size() && i<pos[left]) final_ans[pos_vec[i].second]=pos[left]-1;
        else{
            left++;
            if(left>=pos.size()){
                final_ans[pos_vec[i].second]=n-1;
            }
            else final_ans[pos_vec[i].second]=pos[left]-1;
        }
    }
    for(int i=0;i<n;i++){
        cout<<final_ans[i]<<endl;
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