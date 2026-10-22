#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    string a;
    string b;
    cin>>a;
    cin>>b;
    if(a.size()<=b.size()){
        int max_length=0;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<b.size();j++){
                if(a[i]==b[j]){
                    int k=j;
                    int m=i;
                    while(k<b.size() && m<a.size() && b[k]==a[m]) k++,m++;
                    max_length=max(max_length,k-j);
                }
            }
        }
        cout<<a.size()+b.size()-2*max_length<<endl;
    }
    else{
        int max_length=0;
        for(int i=0;i<b.size();i++){
            for(int j=0;j<a.size();j++){
                if(b[i]==a[j]){
                    int k=j;
                    int m=i;
                    while(k<a.size() && m<b.size() && a[k]==b[m]) k++,m++;
                    max_length=max(max_length,k-j);
                }
            }
        }
        cout<<a.size()+b.size()-2*max_length<<endl;
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