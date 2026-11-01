#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int x,y,z;
    cin>>x>>y>>z;
    string s;
    if(x>=y && x>=z){
        for(int i=0;i<x+y+z;i++){
            s=s+'P';
        }
        cout<<s<<"\n";
        return;
    }
    if(y>=x && y>=z){
        for(int i=0;i<x+y+z;i++){
            s=s+'R';
        }
        cout<<s<<"\n";
        return;
    }
    if(z>=x && z>=y){
        for(int i=0;i<x+y+z;i++){
            s=s+'S';
        }
        cout<<s<<"\n";
        return;
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