#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<long long int>x(n);
    vector<long long int>y(n);
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n;i++){
        cin>>y[i];
    }
    vector<long long int>diff(n);
    for(int i=0;i<n;i++){
        diff[i]=y[i]-x[i];
    }
    sort(diff.begin(),diff.end());
    int right=n-1;
    if(diff[0]>=0){
        int n1=diff.size()/2;
        cout<<n1<<"\n";
        return;
    }
    int left=0;
    for(int i=0;i<n;i++){
        if(diff[i]>=0) {left=i;break;}
    }
    if(diff[right]<0){
        cout<<0<<"\n";
        return;
    }
    int lower=0;
    int count=0;
    while(right>=0 && diff[lower]<0 && diff[right]>=0){
        if(diff[right]+diff[lower]>=0){
            lower++;
            right--;
            count++;
        }
        else lower++;
    }
    int newcount=n-count-left;
    newcount=newcount/2;
    newcount=newcount+count;
    cout<<newcount<<"\n";
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