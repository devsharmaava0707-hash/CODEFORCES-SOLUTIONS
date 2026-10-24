#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int left=0;
    int right=0;
    string g=s;
    sort(s.begin(),s.end());
    if(s==g){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(g[left]>g[i]){
            right=i;
            break;
        }
        if(g[left]<g[i]) left=i;
    }
    cout<<"YES"<<endl;
    cout<<left+1<<endl<<right+1<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}