#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    vector<int>submit;
    if(ans.size()==1){
        cout<<1<<"\n";
        return;
    }
    submit.push_back(ans[0]);
    submit.push_back(ans[1]);
    for(int i=2;i<n;i++){
        int sizeo=submit.size();
        int x=submit[sizeo-1]-submit[sizeo-2];
        if(x>0){
            if(ans[i]>submit[sizeo-1]) submit[sizeo-1]=ans[i];
            else if(ans[i]<submit[sizeo-1]) submit.push_back(ans[i]);
        }
        else{
            if(ans[i]<submit[sizeo-1]) submit[sizeo-1]=ans[i];
            else if(ans[i]>submit[sizeo-1]) submit.push_back(ans[i]);
        }
    }
    if(submit[0]==submit[1]){
        cout<<submit.size()-1<<"\n";
        return;
    }
    else cout<<submit.size()<<"\n";
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