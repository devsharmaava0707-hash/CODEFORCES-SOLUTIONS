#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    string up;
    string down;
    cin>>up;
    cin>>down;
    int count_up=0;
    int count_down=0;
    for(int i=0;i<n;i++){
        if(up[i]=='f') count_up++;
        if(down[i]=='f') count_down++;
    }
    int diff=abs(count_up-count_down);
    if(count_up>count_down){
        for(int i=1;i<n;i++){
            if((up[i]=='f' && up[i-1]=='f')) diff=diff-2;
            if(diff<=0) break;
        }
    }
    if(count_down>count_up){
        for(int i=1;i<n;i++){
            if((down[i]=='f' && down[i-1]=='f') ) diff=diff-2;
            if(diff<=0) break;
        }
    }
    if(count_up==count_down){
        cout<<0<<"\n";
        return;
    }
    if(diff<0) cout<<1<<"\n";
    else cout<<diff<<"\n";
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