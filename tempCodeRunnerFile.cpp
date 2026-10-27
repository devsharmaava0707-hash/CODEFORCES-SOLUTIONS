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
    if(left==n){
        int left=0,right=0;
        int max_left,max_right;
        int maxsort=0;
        int count=1;
        for(int i=0;i<n-1;i++){
            if(a1[i+1]>=a1[i]){
                right=i;
                count++;
            }
            else{
                if(maxsort<count){
                    maxsort=count;
                    max_left=left;
                    max_right=right;
                }
                count=1;
                left=i,right=i;
            } 
        }
        if(maxsort<count){
                    maxsort=count;
                    max_left=left;
                    max_right=right+1;
                }
        cout<<max_left+1<<"\n"<<max_right+1<<"\n";
        return;
    }
    else{
        int i=left;
        for(;i<n;i++){
            if(a2[i]<=a2[i+1]) i++;
            else break;
        }
        while(left>0 && a2[left]>=a2[left-1]){
            left--;
        }

        cout<<left+1<<"\n"<<i<<"\n";
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