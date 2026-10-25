#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    long long int n,x;
    cin>>n>>x;
    vector<long long int>a(n);
    vector<long long int>b(n);
    vector<long long int>c(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    vector<int>target_bits;
    if(x==0) target_bits.push_back(0);
    while(x>0){
        target_bits.push_back(x&1);
        x>>=1;
    }
    vector<int>bits_made(target_bits.size(),0);
    for(int i=0;i<n;i++){
        vector<int>bits_aval;
        if(a[i]==0) bits_aval.push_back(0);
        while(a[i]>0){
            bits_aval.push_back(a[i]&1);
            a[i]=a[i]>>1;
        }
        if(bits_aval.size()>target_bits.size()) break;
        bool done=true;
        for(int i=0;i<bits_aval.size();i++){
            if((target_bits[i]==bits_aval[i]) || (target_bits[i]==1 && bits_aval[i]==0)){
                done=true;
            }
            else{
                 done=false;
                break;
            }
        }
        if(!done) break;
        for(int i=0;i<bits_aval.size();i++){
            if(bits_made[i]!=1) bits_made[i]=bits_aval[i];
        }
    }
    for(int i=0;i<n;i++){
        vector<int>bits_aval;
        if(b[i]==0) bits_aval.push_back(0);
        while(b[i]>0){
            bits_aval.push_back(b[i]&1);
            b[i]=b[i]>>1;
        }
        if(bits_aval.size()>target_bits.size()) break;
        bool done=true;
        for(int i=0;i<bits_aval.size();i++){
            if((target_bits[i]==bits_aval[i]) || (target_bits[i]==1 && bits_aval[i]==0)){
                done=true;
            }
            else{
                done=false;
                break;
            }
        }
        if(!done) break;
        for(int i=0;i<bits_aval.size();i++){
            if(bits_made[i]!=1) bits_made[i]=bits_aval[i];
        }
    }
    for(int i=0;i<n;i++){
        vector<int>bits_aval;
        if(c[i]==0) bits_aval.push_back(0);
        while(c[i]>0){
            bits_aval.push_back(c[i]&1);
            c[i]=c[i]>>1;
        }
        if(bits_aval.size()>target_bits.size()) break;
        bool done=true;
        for(int i=0;i<bits_aval.size();i++){
            if((target_bits[i]==bits_aval[i]) || (target_bits[i]==1 && bits_aval[i]==0)){
                done=true;
            }
            else{
                done=false;
                break;
            }
        }
        if(!done) break;
        for(int i=0;i<bits_aval.size();i++){
            if(bits_made[i]!=1) bits_made[i]=bits_aval[i];
        }
    }
    if(target_bits.size()!=bits_made.size()){
        cout<<"NO\n";
        return;
    }
    for(int i=0;i<target_bits.size();i++){
        if(bits_made[i]!=target_bits[i]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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