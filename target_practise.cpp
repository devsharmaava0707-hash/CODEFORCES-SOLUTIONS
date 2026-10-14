#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n=10;
    vector<vector<char>>ans(n,vector<char>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>ans[i][j];
        }
    }
    int str=0,stc=0,endr=n-1,endc=n-1,sum=0,score=1;
    while(str<=endr && stc<=endc ){
        for(int i=stc;i<=endc;i++){
            if(ans[str][i]=='X') sum=sum+score;
        }
        for(int i=str+1;i<=endr;i++){
            if(ans[i][endc]=='X') sum=sum+score;
        }
        for(int i=endc-1;i>=stc;i--){
            if(ans[endr][i]=='X') sum=sum+score;
        }
        for(int i=endr-1;i>str;i--){
            if(ans[i][stc]=='X') sum=sum+score;
        }
        str++,endr--,stc++,endc--,score++;
    }
    cout<<sum<<endl;
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