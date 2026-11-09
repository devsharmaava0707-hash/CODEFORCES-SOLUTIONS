#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<vector<char>>ans(n,vector<char>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>ans[i][j];
        }
    }
    int flips=0;
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n/2;j++){
            int count1=0;
            int count0=0;
            ans[i][j]=='1' ? count1++ : count0++;
            ans[j][n-i-1]=='1' ? count1++ : count0++;
            ans[n-i-1][n-j-1]=='1' ? count1++ : count0++;
            ans[n-j-1][i]=='1' ? count1++ : count0++;
            flips=flips+min(count0,count1);
        }
    }
    if(n%2==1){
        for(int i=n/2;i<n/2+1;i++){
            for(int j=0;j<n/2;j++){
                int count1=0;
                int count0=0;
                ans[i][j]=='1' ? count1++ : count0++;
                ans[j][n-i-1]=='1' ? count1++ : count0++;
                ans[n-i-1][n-j-1]=='1' ? count1++ : count0++;
                ans[n-j-1][i]=='1' ? count1++ : count0++;
                flips=flips+min(count0,count1);
            }
        }
    }
    cout<<flips<<"\n";
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