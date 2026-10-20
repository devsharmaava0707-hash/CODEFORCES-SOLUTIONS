#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    int d;
    cin>>d;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    int left=0,right=n-1;
    int count=0;
    while(left<=right){
        int i=d/ans[right]+1;
        // if(d%ans[right]!=0) i++;
        if(right-left+1>=i){
            count++;
            right--;
            left=left+i-1;
        }
        else break;
    }
    cout<<count<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    solve();
    
    return 0;
}