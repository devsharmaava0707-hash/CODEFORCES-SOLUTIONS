#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int newzor(int a){
    if(a%4==0){
        return a;
    }
    else if(a%4==1){
        return 1;
    }
    else if (a%4==2){
        return a+1;
    }
    else {
        return 0;
    }
    
}
void solve() {
    int a,b;
    cin>>a>>b;
    int new_zor=newzor(a-1);
    if(new_zor==b){
        cout<<a<<endl;
    }
    if(new_zor!=b){
        if((new_zor^b)!=a){
            cout<<a+1<<endl;
        }
        else cout<<a+2<<endl;
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