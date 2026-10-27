#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int>a1(n);
    vector<int>a2(n);
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    for(int i=0;i<n;i++){
        cin>>a2[i];
    }
    int left=0;
    for(;left<n;left++){
        if(a1[left]!=a2[left]) break;
    }
        int i=left;
        for(;i<n-1;i++){
            if(a2[i]>a2[i+1]) break;
            // else break;
        }
        while(left>0 && a2[left]>=a2[left-1]){
            left--;
        }
        // if(i==n-2) i++;
        int right=i;
        // while(right<n-1 && a2[right]<=a2[right+1]) right++;
        cout<<left+1<<"\n"<<right+1<<"\n";
    
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