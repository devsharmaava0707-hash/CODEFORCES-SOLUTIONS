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
    int left=0,right=n-1;
    int mini=1,maxi=n;
    while(left<right){
        if(ans[left]==maxi){
            maxi--;
            left++;
        }
        else if(ans[left]==mini){
            mini++;
            left++;
        }
        else if(ans[right]==maxi){
            maxi--;
            right--;
        }
        else if(ans[right]==mini){
            mini++;
            right--;
        }
        else break;
    }
    if(left<right){
        cout<<left+1<<"\n";
        cout<<right+1<<"\n";
        return;
    }
    cout<<-1<<"\n";
    
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