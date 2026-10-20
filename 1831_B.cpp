#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<int>freqa(2*n+1,0);
    vector<int>freqb(2*n+1,0);
    int count=0;
    int curr=a[0];
    for(int i=0;i<n;i++){
        if(curr==a[i]){
            count++;
        }
        if(curr!=a[i]){
            freqa[curr]=max(freqa[curr],count);
            count=1;
            curr=a[i];
        }
    }
    
        freqa[curr]=max(freqa[curr],count);
    
    curr=b[0];
    count=0;
    for(int i=0;i<n;i++){
        if(curr==b[i]){
            count++;
        }
        if(curr!=b[i]){
            freqb[curr]=max(freqb[curr],count);
            count=1;
            curr=b[i];
        }
    }
    
        freqb[curr]=max(freqb[curr],count);
    
    int maxfreq=INT_MIN;
    for(int i=0;i<2*n+1;i++){
        maxfreq=max(maxfreq,freqa[i]+freqb[i]);
    }
    cout<<maxfreq<<endl;

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